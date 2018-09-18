#ifndef __EFFECT_PROPERTY_H__
#define __EFFECT_PROPERTY_H__

#include "PropertyComm.h"

PROP_DEFBEGIN()
	PROP_DEFIMP(PROP_EFFECT_TYPE, int, 1, "效果类型")

	PROP_SIMPLEDEFIMP(PROP_EFFECT_TARGETSELECT, int, "效果目标选择")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_FIGHTMEMBERLIST, int, "战斗列表")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_NEGATIVE, int, "是否负效果")

	// 特殊公共属性
	PROP_SIMPLEDEFIMP(PROP_EFFECT_ISBACKATTACK, int, "是否反击")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_FIXTARGET, int, "固定目标")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_FIXHITRESULT, int, "固定命中")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_CURTARGETCOUNT, int, "本效果目标数量") // Effect_Helper 填充
	PROP_SIMPLEDEFIMP(PROP_EFFECT_USEPRETARGET, int, "使用前一个效果的目标")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_PRETARGET, int, "前一个效果的目标")


	// 天赋技能删除
	PROP_SIMPLEDEFIMP(PROP_EFFECT_DELTALENT, int, "天赋技能删除")

	// 技能现场
	PROP_SIMPLEDEFIMP(PROP_EFFECT_USESKILL_ID, int, "技能ID")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_USESKILL_LV, int, "技能等级")

	// 状态现场
	PROP_SIMPLEDEFIMP(PROP_EFFECT_GIVER, int, "效果给予者")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_BUFFID, int, "状态效果状态ID")
	//PROP_SIMPLEDEFIMP(PROP_EFFECT_OVERLAPCOUNT, int, "效果叠加数")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_ISBUFFEFFECT, int, "是否是状态效果")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_ISBUFFENDEFFECT, int, "是否状态结束效果")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_ADDBUFFCHANCE, int, "状态添加几率")

	// 添加属性数值现场数据 (增加= 参照属性 *  万份比 + 加值)
	PROP_SIMPLEDEFIMP(PROP_EFFECT_PROPERTYDST, int, "效果要改变的属性")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_PROPERTYSRC, int, "参照属性")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_PROPERTYADDV, int, "属性增加值")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_PROPERTYADDPERCENT, int, "属性增加万份比")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_ISFROMGIVER, int, "是否按照添加者的属性计算")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_PROPHASLIMIT, int, "改变后属性是否有区间限制")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_PROP_MINVALUE, int, "属性下限")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_PROP_MAXVALUE, int, "属性上限")
	


	// 伤害效果(会包含技能和状态数据)
	//PROP_SIMPLEDEFIMP(PROP_EFFECT_FIXHITRESULT, int, "技能命中结果")
	//PROP_SIMPLEDEFIMP(PROP_EFFECT_DAMAGETYPE, int, "伤害类型")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_DAMAGE_PERCENT, int, "伤害万份比")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_DAMAGE_ADDVALUE, int, "附加伤害")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_HASVAMPIRE, int, "是否有吸血")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_VAMPIREPERCENT, int, "吸血万份比")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_ISMULTDAMAGE, int, "是否多重伤害")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_MULTDAMAGECOUNT, int, "多重伤害次数")

	PROP_SIMPLEDEFIMP(PROP_EFFECT_CONDHPPERCENT, int, "目标HP万份比条件")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_CONDEXTRADAMAGEPERCENT, int, "目标HP万份比满足后额外伤害")

	PROP_SIMPLEDEFIMP(PROP_EFFECT_HASSEXADDPERCENT, int, "是否有性别加成")
	
	PROP_SIMPLEDEFIMP(PROP_EFFECT_CONDSEX, int, "性别条件")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_CONDSEXDAMAGEADDPERCENT, int, "性别伤害加成")

	PROP_SIMPLEDEFIMP(PROP_EFFECT_HASBUFFSEXCOND, int, "是否有添加状态性别条件")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_DAMAGEADDBUFF, int, "伤害并增加状态")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_DAMAGEBUFFCHANCE, int, "伤害添加状态概率")


	// 添加状态
	PROP_SIMPLEDEFIMP(PROP_EFFECT_ADDBUFFID, int, "要添加的状态效果状态ID")


	// 使用物品
	PROP_SIMPLEDEFIMP(PROP_EFFECT_USEITEM_HANDLE, int, "物品句柄")

	// 按照类型删除Buff
	PROP_SIMPLEDEFIMP(PROP_EFFECT_RANDDELTYPE, int, "随机删除状态类型")

	// 条件死亡
	PROP_SIMPLEDEFIMP(PROP_EFFECT_CONDDEAD_HPPERCENT, int, "条件死亡低血万份比")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_CONDDEAD_CHANCE, int, "突然死亡概率")

	// 反弹伤害
	PROP_SIMPLEDEFIMP(PROP_EFFECT_REBOUNDDAMAGE_PERCENT, int, "反弹伤害万份比")

	// 复活
	PROP_SIMPLEDEFIMP(PROP_EFFECT_RELIVE_LIMIT, int, "复活次数限制")

	// 属性增强
	PROP_SIMPLEDEFIMP(PROP_EFFECT_PROPENHANCE_SKILL, int, "增强技能ID")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_PROPENHANCE_PROP, int, "增强属性ID")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_PROPENHANCE_VALUE, int, "增强数值")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_PROPENHANCE_PERCENT, int, "增强万份比")

	// 状态增强
	PROP_SIMPLEDEFIMP(PROP_EFFECT_BUFFENHANCE_SKILL, int, "状态增强技能ID")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_BUFFENHANCE_BUFF, int, "状态增强BuffID")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_BUFFENHANCE_VALUE, int, "状态增强数值")

	// 主公伤害和治疗
	PROP_SIMPLEDEFIMP(PROP_EFFECT_ACOTR_DAMAGEPERCENT, int, "主公伤害修正百分比")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_ACTOR_DAMAGEVALUE, int, "主公伤害修改值")

	// 召唤麒麟
	PROP_SIMPLEDEFIMP(PROP_EFFECT_HEROTALLENT_ID, int, "英雄天赋ID")


	// 条件效果参数
	PROP_SIMPLEDEFIMP(PROP_EFFECT_CONDITIONEFFECT_CONDITION, int, "条件对象")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_CONDITIONEFFECT_EFFECT, int, "效果列表")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_CONDITIONEFFECT_ROUND_LIMITTRIGGER, int, "回合触发次数限制")

	PROP_SIMPLEDEFIMP(PROP_EFFECT_CONDITIONEFFECT_TRIGGERCOUNT, int, "触发次数")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_CONDITIONEFFECT_LASTROUND, int, "触发回合")

	// 回光返照修改
	PROP_SIMPLEDEFIMP(PROP_EFFECT_TOUDHDEADEFFECT_HP, int, "頻死恢复HP")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_TOUDHDEADEFFECT_EFFECTLIST, int, "效果列表")

	// 七星灯
	PROP_SIMPLEDEFIMP(PROP_EFFECT_QIXING_BUFFID, int, "七星状态ID")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_QIXING_EFFECTLIST, int, "七星效果列表")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_QIXING_USED, int, "七星灯是否使用了")
	
	

	// 损失HP增强属性
	PROP_SIMPLEDEFIMP(PROP_EFFECT_PROPENHANCEJP_PROPID, int, "损失HP增强属性的属性ID")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_PROPENHANCEJP_FIXVALUE, int, "损失HP增强属性的参数")

	// 免疫状态
	PROP_SIMPLEDEFIMP(PROP_EFFECT_IMMUNITY_BUFFTYPE, int, "免疫状态类型")
	//ImMunity

	/*
	PROP_SIMPLEDEFIMP(PROP_EFFECT_TARGETSELECT, int, "效果目标选择")
	
	PROP_SIMPLEDEFIMP(PROP_EFFECT_NORMALTARGET, int, "普通目标") // 目标为普通选择策略时的目标
	PROP_SIMPLEDEFIMP(PROP_EFFECT_PROTECTTARGET, int, "保护目标")

	PROP_SIMPLEDEFIMP(PROP_EFFECT_PLAYEFFECT, int, "播放特效")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_ISPLAYER_HURT_ANIM, int, "是否播受击动画")

	
	
	PROP_SIMPLEDEFIMP(PROP_EFFECT_SPECIAL_HITRESULT, int, "特殊命中")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_FIXTARGET, int, "固定目标") //用于合击，反击
	
	

	// 添加状态效果
	
	PROP_SIMPLEDEFIMP(PROP_EFFECT_ADDBUFFID, int, "要添加的状态效果状态ID")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_BUFFCHANCE, int, "状态效果状态概率")


	// 伤害效果(会包含技能和状态数据)
	PROP_SIMPLEDEFIMP(PROP_EFFECT_FIXHITRESULT, int, "技能命中结果")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_DAMAGETYPE, int, "伤害类型")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_DAMARate, int, "伤害倍率")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_ADDTION_DAMAGE, int, "附加伤害")

	// 伤害附加吸血效果
	PROP_SIMPLEDEFIMP(PROP_EFFECT_VAMPIREPERCENT, int, "吸血万分比")

	// 打开FB页面
	PROP_SIMPLEDEFIMP(PROP_EFFECT_DUNGEONPAGE, int, "副本页面")

	// 跑酷相关内容
	// 触发器击杀
	PROP_SIMPLEDEFIMP(PROP_EFFECT_TRIGGERENTITY, int, "被触发的触发器对象")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_TRIGGERKILL_NUM, int, "触发器击杀数目")

	// 触发器采集
	PROP_SIMPLEDEFIMP(PROP_EFFECT_TRIGGERGATHER_NUM, int, "触发器采集数目")

	// 治疗
	PROP_SIMPLEDEFIMP(PROP_EFFECT_HEALRATE, int, "治疗附加系数")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_HEALADDVALUE, int, "治疗附加值")

	// 连击效果
	PROP_SIMPLEDEFIMP(PEOP_EFFECY_FIXATTACKTIMES, int, "固定连击数")
	PROP_SIMPLEDEFIMP(PEOP_EFFECY_RANDATTACKTIMES, int, "浮动连击数")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_RANDATTACK_CHANCE, int, "浮动连击概率")
	// 给其他效果系统用的标记
	PROP_SIMPLEDEFIMP(PROP_EFFECT_ISBATTERDAMAGE, int, "是否连击技能")

	// 学习技能效果
	PROP_SIMPLEDEFIMP(PROP_EFFECT_LEARNSKILLID, int, "学习技能ID")

	// 添加宠物
	PROP_SIMPLEDEFIMP(PROP_EFFECT_ADDPETID, int, "添加的宠物ID")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_PETSTARLEVEL, int, "宠物星级")

	// 援护现场
	PROP_SIMPLEDEFIMP(PROP_EFFECT_HELPTARGET, int, "保护目标")

	// 删除状态
	PROP_SIMPLEDEFIMP(PROP_EFFECT_DELBUFF_STRATEGY, int, "状态删除策略")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_DELBUFF_VALUE, int, "状态删除数值") // 不同策略，数值代表不同含义

	// 免疫状态
	PROP_SIMPLEDEFIMP(PROP_EFFECT_IMMUNITYBUFF_STRATEGY, int, "状态免疫策略")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_IMMUNITYBUFF_VALUE, int, "状态免疫数值") // 不同策略，数值意义不同

	// 是否装备技能
	PROP_SIMPLEDEFIMP(PROP_EFFECT_ISEQUIP_TRIGGERSKILL, int, "是否装备触发技能")

	// 阵形学习
	PROP_SIMPLEDEFIMP(PROP_EFFECT_LEARN_FORMATIONID, int, "阵形ID")

	// 宝箱功能
	PROP_SIMPLEDEFIMP(PROP_EFFECT_CHEST_AWARD1, int, "宝箱奖励ID1")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_CHEST_AWARD2, int, "宝箱奖励ID2")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_CHEST_AWARD3, int, "宝箱奖励ID3")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_CHEST_AWARD4, int, "宝箱奖励ID4")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_CHEST_AWARD5, int, "宝箱奖励ID5")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_CHEST_AWARD6, int, "宝箱奖励ID6")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_CHEST_AWARD7, int, "宝箱奖励ID7")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_CHEST_AWARD8, int, "宝箱奖励ID8")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_CHEST_AWARD9, int, "宝箱奖励ID9")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_CHEST_AWARD10, int, "宝箱奖励ID10")

	// 添加经验
	PROP_SIMPLEDEFIMP(PROP_EFFECT_ADDEXPVALUE, int, "要添加的经验值")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_ADDSTARDEXPRATE, int, "经验的标准效率倍数")

	// 大富翁额外数据
	PROP_SIMPLEDEFIMP(PROP_EFFECT_BUFFTEXTID, int, "大富翁状态策划定义ID")

	// 合成物品
	PROP_SIMPLEDEFIMP(PROP_EFFECT_COMBINE_SRCITEMID, int, "合成源物品ID")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_COMBINE_SRCITEMCOUNT, int, "合成源物品数量")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_COMBINE_DSTITEMID, int, "合成目标物品ID")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_COMBINE_DSTITEMCOUNT, int, "合成目标物品数量")

	// 自定义参数(物品使用等)(Properset_S)
	PROP_SIMPLEDEFIMP(PROP_EFFECT_CUSTOM_CONTEXT, int, "自定义现场")



	// 灵魄合成
	PROP_SIMPLEDEFIMP(PROP_EFFECT_PETSOUL_AWARDID, int, "合成奖励ID")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_PETSOUL_SRCID1, int, "宠物魂魄ID1")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_PETSOUL_SRCCOUNT1, int, "宠物魂魄ID1数量")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_PETSOUL_SRCID2, int, "宠物魂魄ID2")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_PETSOUL_SRCCOUNT2, int, "宠物魂魄ID2数量")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_PETSOUL_SRCID3, int, "宠物魂魄ID3")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_PETSOUL_SRCCOUNT3, int, "宠物魂魄ID3数量")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_PETSOUL_SRCID4, int, "宠物魂魄ID4")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_PETSOUL_SRCCOUNT4, int, "宠物魂魄ID4数量")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_PETSOUL_SRCID5, int, "宠物魂魄ID5")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_PETSOUL_SRCCOUNT5, int, "宠物魂魄ID5数量")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_PETSOUL_SRCID6, int, "宠物魂魄ID6")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_PETSOUL_SRCCOUNT6, int, "宠物魂魄ID6数量")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_PETSOUL_SRCID7, int, "宠物魂魄ID7")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_PETSOUL_SRCCOUNT7, int, "宠物魂魄ID7数量")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_PETSOUL_SRCID8, int, "宠物魂魄ID8")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_PETSOUL_SRCCOUNT8, int, "宠物魂魄ID8数量")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_PETSOUL_SRCID9, int, "宠物魂魄ID9")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_PETSOUL_SRCCOUNT9, int, "宠物魂魄ID9数量")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_PETSOUL_SRCID10, int, "宠物魂魄ID10")
	PROP_SIMPLEDEFIMP(PROP_EFFECT_PETSOUL_SRCCOUNT10, int, "宠物魂魄ID10数量")*/

PROP_DEFEND()


#endif