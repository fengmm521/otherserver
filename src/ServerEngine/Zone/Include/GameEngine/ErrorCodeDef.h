#ifndef __ERROR_CODEDEF_H__
#define __ERROR_CODEDEF_H__

enum
{
	ERROR_SYSERROR = 1,                // 系统错误
	ERROR_GETROLE_ERROR = 2,			// 获取角色信息错误
	ERROR_DUNPLICATENAME = 3,		    // 角色名字重名
	ERROR_NEWROLE_SYSERROR = 4,      // 新建角色系统错误
	ERROR_ROLENAME_EMPTY = 5,        // 角色名字为空
	ERROR_ROLENAME_TOOLONG = 6,      // 角色名字太长了
	ERROR_DUNGEON_SECTION_NOTOPEN = 7, // 章节未开启
	ERROR_NEED_PHYSTRENGTH = 8,// 体力不足
	ERROR_SECTION_GETED = 9,  // 章节完美通关奖励已经领取了
	ERROR_NOT_ONFORMATION = 10, // 不在阵形上
	ERROR_FORMATION_SAMEID = 11, // 阵形上已经有相同的英雄了
	ERROR_FORMATION_LIMIT = 12, // 达到上阵人数限制了
	ERROR_FIGHTSOUL_BAGFULL = 13, // 武魂背包满了F=
	ERROR_NEED_SILVER = 14,      // 银币不足
	ERROR_EXIST_SAMEID_FIGHTSOUL = 15, // 已经装备了相同的武魂了
	ERROR_FIGHTSOUL_LOCKED = 16, // 武魂已经锁定了
	ERROR_NOVALID_FIGHTSOL = 17, // 没有可以合并的武魂
	ERROR_FIGHTSOUL_TOUCHMAX = 18, // 已经达到上限了
	ERROR_NEED_CHIP = 19, //武魂碎片不够
	ERROR_TOUCH_MAXHERO = 20, // 达到英雄上限了
	ERROR_NEED_ITEM = 21, // 物品不足
	ERROR_HERO_TOUCHMAXLV = 22, // 英雄达到最高等级了
	ERROR_NO_HEROEXP = 23, // 修为不足
	ERROR_HERO_CAONNOTINFORMATION = 24, // 英雄不能在阵上
	ERROR_HERO_NEEDSAMEID = 25, // 必须是同种英雄
	ERROR_HERO_TOULEVELSTEPLIMIT = 26, // 英雄等阶达到最大
	ERROR_ITEM_CANNOTUSE = 27, // 物品不可使用
	ERROR_GODANIMAL_SAMEID = 28, // 已经存在相同的神兽了
	ERROR_GODANIMAL_MAXLEVEL = 29, // 神兽达到最大等级了
	ERROR_GODANIMAL_NEEDLEVELSTEP = 30, //  已经达到当前等阶的最大等级了
	ERROR_GODANIMAL_MAXLEVELSTEP = 31, //已达最高等阶
	ERROR_NEED_GOLD = 32, // 元宝不足
	ERROR_GODANIMAL_INVALID_INHERIT = 33, // 传承者必须等级或者等阶比被传承者高
	ERROR_FORMATION_CANNOTEMPTY = 34, // 阵形上至少需要有一个人
	ERROR_DOMAIN_LOVELIMIT = 35, // 宠幸次数达到上限
	ERROR_DOMAIN_LOVECD = 36, // 宠幸CD
	ERROR_DOMAIN_PLAYED = 37, // 已经调戏了
	ERROR_DOMAIN_GOLDMINELIMIT = 38, // 金矿加速生产限制
	ERROR_DOMAIN_MONSTERDEAD = 39, // 资源怪物已经死亡
	ERROR_DOMAIN_LOOTCD = 40, // 掠夺CD
	ERROR_DOMAIN_LOOTPROTECT = 41, // 掠夺保护中
	ERROR_FUNCTION_NOTOPEN =42, // 未开启该功能
	ERROR_DOMAIN_BEPLAYLIMIT = 43, // 被调戏上限
	ERROR_DOMAIN_NOTOPEN = 44, // 对方领地未开启
	ERROR_LEGIONNAME_EXIST = 45, // 军团名字重名

	ERROR_LEGION_NOREADY = 46, // 军团暂未准备好
	ERROR_LEGION_NAMETOOLONG = 47, // 军团名字太长
	ERROR_RCV_NOTONLINE = 48, // 目标不在线
	ERROR_HAS_LEGION = 49, // 已经有军团了
	ERROR_HAS_APPLYED = 50, // 已经申请了
	ERROR_APPLY_FULL = 51, // 军团申请已经满了
	ERROR_NO_RIGHT = 52, // 没有权限
	ERROR_TARGET_NOT_MEMBER = 53, // 目标不是军团成员
	ERROR_CANNOT_KICKSELF = 54,//不能踢自己
	ERROR_LEGION_BLESSED = 55, // 已经祝福过了
	ERROR_LEGION_PAYGETED = 56, // 军团福利已经领取
	ERROR_NO_CONTRIBUTE = 57, // 贡献不够
	ERROR_LEADER_CONNOTLEAVE = 58, // 团长不能退团
	ERROR_NO_APPLYED = 59, // 未申请
	ERROR_ONLY_LEADER = 60, // 只有团长能进行该操作
	ERROR_CALLBOSS_CD = 61, // 暂时还不能召唤BOSS
	ERROR_CUR_ALIVE = 62, // 当前处于生存状态
	ERROR_CUR_NOLEGIONBOSS = 63, // 当前没有军团BOSS
	ERROR_BOSS_ISRUNNING = 64, // 军团BOSS已经开启
	ERROR_LEGION_MAXLEVEL = 65, // 军团等级达到上限
	ERROR_LEGION_FIGHTING = 66, // 正在战斗中不能查看
	
	ERROR_IN_TOWERTOP = 70, //在通天塔最高层
	ERROR_IN_BOTTOM = 71,   //最底层不能重置
	ERROR_LACK_RESETCOUNT = 72, //重置次数不足
	ERROR_NO_REPORTRIGHT = 73, // 没有宣战权限
	ERROR_IN_LEGIONFIGHTING = 74, // 正在战斗中
	ERROR_REPORTED_OTHERCITY = 75, // 已经报名了其他城市
	ERROR_NO_REPORTCITY = 76, // 没有宣战城市
	ERROR_JOINED_CITY = 77, // 已经报名参战了
	ERROR_REPORT_LEVEL = 78, // 军团不够报名等级
	ERROR_REPORT_FULL = 79, // 本领地的宣战名额已满
	ERROR_LEGIONSHOP_USED = 80, // 商店该位置已经被购买了
	ERROR_LEGIONFIGHT_LEVEL = 81, // 军团等级不够开启军团战
	ERROR_LEGIONFIGHT_NOSTART = 82, // 领地争夺战还未开启
	ERROR_LEGION_INFIGHTING = 83, // 领地争夺战中，不允许解散
	ERROR_NO_GIFT = 84, // 不存在这个奖励
	
	ERROR_LEGIONBOSS_TOUCHMAX = 85, // 鼓舞达到上限

	ERROR_ARENA_BUYLIMIT = 86, // 竞技场购买次数达到上限
	ERROR_ARENA_BUSY = 87, //系统繁忙


	ERROR_NO_HONOR = 88,         //荣誉点不足
	ERROR_ADD_ITEM = 89,         //添加道具失败
	ERROR_CANBUY_TIMES = 90, //已达购买上限不能继续购买
	ERROR_ARENA_NEEDCOUNT = 91, // 竞技场次数已经满了
	ERROR_PVE_CD = 92, // PVE冷却中
	ERROR_WORLDBOSS_CHEERLIMIT = 93, // 世界BOSS 鼓舞次数限制
	ERROR_LEGIONBOSS_CD = 94, // 军团BOSSCD
	ERROR_WORLDBOSS_CD = 95, // 世界BOSSCD
	ERROR_WORLDBOSS_ALIVE = 96, // 存活状态，无需复活
	
	ERROR_CAMPBATTLE_NOTACTIVE = 97, //阵营战未达到开启时间
	ERROR_BUYPHYSTRENGTHLIMIT = 98, // 购买体力次数达到上限
	ERROR_CAMPBATTLE_SIGNOUT = 99,	//退出错误
	ERROR_CAMPBATTLE_SIGNIN = 100,	//阵营战加入错误
	ERROR_ACTORNAME_NOEXITED = 101, //用户不存在
	ERROR_HAS_FRIEND = 102,			//已经是朋友了
	ERROR_OVER_GIVELIMIT= 103,     //超出了体力上限
	ERROR_OVER_GETLIMITTIMES = 104, //超出了领取上限
	ERROR_HAS_REQUESTLIST  = 105,	//等待对方玩家同意
	
	ERROR_DUNGEON_NOPERFECT = 106, // 完美通关才能领取奖励
	ERROR_FIGHTSOUL_ADVANCELIMIT = 107,  // 得心应手召唤次数已经用完
	ERROR_FRIENDSYSTEM_HAVE_GETSTRENGTH = 108,//已经获取到了体力值
	ERROR_FRIENDSYSTEM_HAVE_GIVESTRENGTH = 109,//已经赠送了体力值
	ERROR_FRIENDSYSTEM_NOT_FRIEND = 110, //已经不是朋友
	ERROR_NOTIN_LEGIONCHAT = 111, // 未加入军团，不能军团聊天

	ERROR_DOMAIN_PLAYLIMIT = 112, // 调戏次数限制

	ERROR_DOMAIN_NOOPEN = 113, // 领地未开启
	ERROR_LEGION_NOOPEN = 114, // 军团未开启


	
	ERROR_SHOPHEROGUIDE_NOOPEN = 122, // 商城抽取英雄功能未开启
	ERROR_GODANIMAL_NOOPEN = 123, // 神兽未开启
	ERROR_ARENA_NOOPEN = 124, // 竞技场未开启
	ERROR_FRIEND_NOOPEN = 125, // 好友未开启
	ERROR_WORLDBOSS_NOOPEN = 126, // 世界BOSS未开启
	ERROR_FIGHTSOUL_NOOPEN = 127, // 武魂未开启
	ERROR_CAMP_NOOPEN = 128, // 阵营战未开启
	ERROR_CLIMTOWER_NOOPEN = 129, // 爬塔未开启
	ERROR_CLiMTOWER_HAVENOT_PAST = 130,  //快速爬塔必须爬通过的层
	ERROR_CLIMTOWER_RESETCOUNT_OVERFLOW = 131, //重置次数已满，不可增加

	ERROR_LEGIONAME_INVALID = 132, // 军团名字非法
	ERROR_ROLENAME_INVALID = 133, // 名字含有非法字符
	ERROR_CLIMBTOWER_NOBUYTIMES = 134, //通天塔今日购买次数已经用完

	ERROR_GODANIML_ACTIVE_NOITEM = 135, //激活所需物品不足

	ERROR_HERO_CONVERT_NOOPEN = 136, // 轮回功能暂未开启
	ERROR_HERO_CANNOTSANGO_FIGHTSOUL = 137, // 脱掉身上的武魂后才能散功

	
	ERROR_CANNOTQUIT_FIRSTSCENE = 138, // 第一关不能退出
	ERROR_SHOP_NOOPEN = 139,				//商城未开启
	ERROR_HEROLEVEL_3ACTORLEVEL = 140, // 在玩家满级前，英雄等级不能超过玩家等级X3

	ERROR_GODANIMALLEVEL_3ACTORLEVEL = 141, // 在玩家满级前，神兽等级不能超过玩家等级X3

	ERROR_EQUIPPOS_INVALID = 145, // 装备位置不符
	ERROR_INVALID_EQUIP = 146, // 不合法的装备
	ERROR_EQUIP_LEVEL = 147, // 未达到装备等级
	ERROR_EQUIPBAG_FULL = 148, // 装备背包满了
	ERROR_EQUIP_CANNOTSELL = 149, // 这个装备不能出售

	ERROR_CANNOT_QUERYGODMINE = 150, // 还不能加速金矿产出

	ERROR_CANNOTSANGO_EQUIP = 151, // 脱掉身上的装备后才能散功

	ERROR_HAVEEQUIPORSOUL_CANNOT_SELL = 152, //有装备或武魂不能出售
	
	ERROR_EQUIP_MAXLEVEL = 153, // 装备达到最高等
	ERROR_EQUIP_MASTERLV_LIMIT = 154, // 装备等级达到主公2倍了

	ERROR_DUNGEON_COUNTLIMIT = 155, // FB挑战次数限制

	ERROR_CANNOTSAODANG_STAR3 = 156, // 只有3星通关的关卡才能扫荡

	ERROR_SAODANG_NOPOINT = 157, // 当前扫荡次数不足

	ERROR_MAIL_NOTEXIST = 158, // 邮件不存在

	ERROR_MAIL_NOAWARD = 159, // 没有附件

	ERROR_MAIL_AWARDED = 160, // 附件已经被领取了

	ERROR_MAIL_AWARDERROR = 161, // 邮件奖励错误
	
	ERROR_DREAMLAND_CANUPFORAMTION_LIMIT = 162,  //幻境可出战人数达到上
	
	ERROR_DREAMLAND_RESETTIEMS_LIMIT = 163,		//幻境当日可重置次数达到上限
	
	ERROR_DREAMLAND_NOOPNE = 164, //幻境未开启
	
	ERROR_DREAMLAND_GREGUARD_ERROR = 165, //幻境获取守关将信息失败

	ERROR_DREAMLAND_HERO_INFORMATION = 166, //在出阵中

	ERROR_DREMALAND_NO_HERO = 167,		//没有英雄

	ERROR_DREAMLAND_ISLOCK_SECTION = 168, //点击了非锁定幻境

	ERROR_HERO_LACKSOUL = 170, // 缺少魂魄

	ERORR_TALLENT_NEEDITEM = 171, // 天赋突破，缺少材料

	ERROR_TALLENT_NEEDLEVELSTEP = 172, // 天赋突破，等阶不够

	ERROR_HERO_MAXLEVELSTEP = 173, // 已经达到最大等阶

	ERROR_MANOR_SILVER_LEVELUPOVER = 174, //领地铜矿升级已经完成

	ERROR_MANOR_HEROEXP_LEVELUPOVER = 175,	//领地修为矿升级已经完成 

	ERROR_MANOR_RES_LEVELLIMIT = 176,	//矿已经达到最高级。不能升级

	ERROR_MANOR_RES_LEVELUPACTOR_THRICE = 177, //领地矿等级不能高于玩家3倍

	ERROR_MANOR_RES_HAVESTLIMIT = 178,//收取领地矿次数已达上限

	ERROR_MANOR_WUHUNDIAN_LEVELIMMIT = 179, //武魂殿达到最好等级不能升级

	ERROR_MANOR_TIEJIANGPU_LEVELLIMIT = 180, //铁匠铺达到最好等级不能升级

	ERROR_MANOR_LOOT_NOT_THETIME = 181,	//每天8~23点才可以掠夺
	
	ERROR_MANOR_LOOT_VIGOR = 182, //掠夺体力不足

	ERROR_MANOR_LOOT_OTHERBEFORYOU = 183, //你要掠夺的人有人先掠夺了

	ERROR_HERO_EXIST = 184, // 英雄已经存在

	ERROR_QUALITY_TOUCHMAX = 185,

	ERROR_MANOR_CANLEVELUP_LIMIT = 186,//可升级上限

	ERROR_MANOR_ISLEVELUP = 187,	//正在打造中

	ERROR_MANOR_NOT_MORE_BUILDTEAMS = 188,	//没有多余的建筑队

	ERROR_CALLHERO_NEEDITEM = 189,

	ERROR_NEED_TOKEN = 190,					//令牌不足'

	ERROR_NO_CANLOOTACTOR = 191,				//没有可掠夺的玩家

	ERROR_HEROTALLENT_NEEDMASTERLV = 200, // 主公等级不够

	ERROR_HEROTALLENT_TOCHMAXLV = 201, // 已经达到最高等级

	ERROR_DREAMLAND_HERO_HAVE_DEATH = 202,	//这个英雄已经死了
	ERROR_DREAMLAND_DEATH_HERO_LIMIT = 203,	//死亡人数达到上限

	ERROR_DUNGON_SAODANG_OPENLEVEL = 204,		//15级开启扫荡

	ERROR_ARENA_RESET_ERROR_CD = 205,		//重置时CD 已经完成
	
	ERROR_ARENA_IN_CD = 206,					//在CD 中

	ERROR_MANOR_OPEN_LEVEL = 207,			//武魂殿7级开放

	ERROR_MANOR_TIEMS_LIMIT = 208,			//竞技场次数不足

	ERROR_MANOR_TOLOOT_OPNELEVEL = 209,		//领地掠夺功能开始等级10

	ERROR_CHAT_HAVE_RESERVER = 210,			//敏感词

	ERROR_CHAT_MSG_TOOLONG = 211,			//聊天信息太长

	ERROR_FRIENDSYSTEM_FRINEDLIMIT = 212,     //好友人数达到上限

	ERROR_MANOR_IN_PROTECT = 213,			//掠夺的人在保护时间

	ERROR_MANOR_TIEJIANGPU_OPENLEVEL = 214,	//铁匠铺开启等级7级

	ERROR_CONVERTCODE_HAVEUSE = 215,   //兑换码被其他人用了

	ERROR_CONVERTCODE_HAVENOT = 216, //没有这个兑换码

	ERROR_CONVERTCODE_ACTORHAVE = 217,	//玩家已经兑换了这个礼包

	ERROR_CANNOT_SAVEMONEY = 218, // 未开放充值

	ERROR_NAME_BANSTRING = 219, // 包含敏感字

	ERROR_ACCOUNT_OTHERLOGIN = 220, // 帐号异地登录

	ERROR_FRIEND_FRIEND_LIMIT = 221,	//好友的好友列表已满

	ERROR_FRIEND_FRIEND_LEVEL = 222,	//需要添加的好友等级不足

	ERROR_LEGION_WORSHIP_TIMES = 223,	//膜拜次数已经用完

	ERROR_LEGION_SHOP_OPENLEVEL = 224,	//军团商店开启等级

	ERROR_LEGION_WEEK_APP_TIMES = 225,	//军团可申请次数已经用完

	ERROR_LEGION_LEAVE_SECOND = 226,	//离开军团24小时内不能加入

	ERROR_EQUIP_JOBINVALID = 227,

	ERROR_LEGION_BUILD_TIMES= 228, //军团建设次数已满

	ERROR_OPERATE_CHECKIN_OVER = 229,	//今日可领取次数已用完，升级VIP

	ERROR_COMBINE_XIHAO_NEEDITEM = 230, // 合成喜好品材料不足

	ERROR_LEGION_VICE_LIMIT = 231, //副军团长个数上限

	ERROR_LEGION_MEMBER_LIMIT = 232, //军团人数到上限
	
	ERROR_FIGHT_TOO_FIGHT = 233,  //战斗点的太快

	ERROR_MONTH_CARD_REMAIND = 234, //月卡剩余过多

	ERROR_EQUIP_HASNO_XILIAN_PROP = 235,	// 装备没有洗炼属性

	ERROR_EQUIP_XILIAN_LV_LIMIT = 236,	// 40级后开启装备锻造功能

	ERROR_LEGION_NOT_INREPORT = 246,  //不在报名时间
	ERROR_HAVE_REPORT = 237,  //只能宣战一个军团
	ERROR_NOTIN_LEGIONCAMPBATTLE = 238, //没有在战斗中
	ERROR_LEGION_NOTREPORT = 239, //没有参加军团战
	ERROR_ATT_MEM_ISBUSY = 240,  //要战斗的这个阶忙
	ERROR_ATT_STAR_LOST = 241,  //星阶已经被掠夺
	ERROR_LEGION_REPROT_NOMONEY = 242,
	ERROR_RE_REPORT = 243, //重选战
	ERROR_REPORT_SELF = 244, //对自己宣战

	ERROR_LEGION_MEMBER_LIMITE = 245,
	ERROR_LEGION_HAVE_BATTLE = 247,

	ERROR_LEGION_APP_INBATTLE = 248,
	ERROR_LEGION_KICKMEMBER_INBATTLE = 249
};




#endif
