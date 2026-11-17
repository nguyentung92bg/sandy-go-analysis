/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleHallButton$$StartTimer
void Dino_BusSand_App_UI_BattleRoyaleHallButton__StartTimer (Dino_BusSand_App_UI_BattleRoyaleHallButton_o* __this, int64_t end, System_Action_o* onFinished, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleHallButton$$StartTimer
   void Dino_BusSand_App_UI_BattleRoyaleHallButton__StartTimer
   (Dino_BusSand_App_UI_BattleRoyaleHallButton_o* __this, int64_t end, System_Action_o* onFinished,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_BattleRoyaleHallButton__StartTimer_218bcf4
               (long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  lVar1 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0(0);
  uVar2 = Dino_BusSand_App_Meta_LiveClock__FormatRemain_2240758((param_2 - lVar1) / 1000,0);
  Dino_BusSand_App_UI_BattleRoyaleHallButton__SetStatus_218bd9c(param_1,0,uVar2);
  uVar3 = UnityEngine_Behaviour__get_isActiveAndEnabled_43bc5d0(param_1,0);
  if ((uVar3 & 1) != 0) {
    uVar2 = Dino_BusSand_App_UI_BattleRoyaleHallButton__Countdown_218be8c(param_1,param_2,param_3);
    uVar2 = UnityEngine_MonoBehaviour__StartCoroutine_43c3cb4(param_1,uVar2,0);
    puVar4 = (undefined8 *)(param_1 + 0x50);
    *puVar4 = uVar2;
    if (iRam00000000051c1b10 != 0) {
      FUN_02220bf0(1L << ((ulong)puVar4 >> 0xc & 0x3f),
                   ((ulong)puVar4 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
    }
    return;
  }
  return;
}

