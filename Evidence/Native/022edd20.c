/* IL2CPP: Dino.BusSand.App.UI.YachtRacingPanel$$StartBounceLoop
void Dino_BusSand_App_UI_YachtRacingPanel__StartBounceLoop (Dino_BusSand_App_UI_YachtRacingPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingPanel$$StartBounceLoop
   void Dino_BusSand_App_UI_YachtRacingPanel__StartBounceLoop
   (Dino_BusSand_App_UI_YachtRacingPanel_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_YachtRacingPanel__StartBounceLoop_21edd20(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  Dino_BusSand_App_UI_YachtRacingPanel__StopBounceLoop_21edd6c();
  uVar1 = UnityEngine_Behaviour__get_isActiveAndEnabled_43bc5d0(param_1,0);
  if ((uVar1 & 1) != 0) {
    uVar2 = Dino_BusSand_App_UI_YachtRacingPanel__BounceSoundLoop_21edd98();
    uVar2 = UnityEngine_MonoBehaviour__StartCoroutine_43c3cb4(param_1,uVar2,0);
    puVar3 = (undefined8 *)(param_1 + 0x98);
    *puVar3 = uVar2;
    if (iRam00000000051c1b10 != 0) {
      FUN_02220bf0(1L << ((ulong)puVar3 >> 0xc & 0x3f),
                   ((ulong)puVar3 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
    }
    return;
  }
  return;
}

