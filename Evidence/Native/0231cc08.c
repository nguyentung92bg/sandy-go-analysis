/* IL2CPP: Dino.BusSand.App.Meta.JourneyTracking$$ReviveOffer
void Dino_BusSand_App_Meta_JourneyTracking__ReviveOffer (Dino_BusSand_Core_StageEngine_o* e, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.Meta.JourneyTracking$$ReviveOffer
   void Dino_BusSand_App_Meta_JourneyTracking__ReviveOffer (Dino_BusSand_Core_StageEngine_o* e,
   const MethodInfo* method); */

void Dino_BusSand_App_Meta_JourneyTracking__ReviveOffer_221cc08(long param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  double dVar7;
  
  puVar1 = PTR_DAT_04caba90;
  if ((bRam0000000004f9bd9a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caba90);
    bRam0000000004f9bd9a = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = Dino_BusSand_App_Meta_JourneyTracking__Recording_221b330(param_1);
  if ((uVar3 & 1) != 0) {
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar4 = *(long *)puVar1;
    }
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar6 = *(undefined8 *)(param_1 + 0x78);
    lVar5 = **(long **)(lVar4 + 0xb8);
    dVar7 = (double)UnityEngine_Time__get_realtimeSinceStartupAsDouble_43cd760(0);
    lVar4 = -0x8000000000000000;
    if (dVar7 * _UNK_00e6a6f0 != INFINITY) {
      lVar4 = (long)(dVar7 * _UNK_00e6a6f0);
    }
    iVar2 = Dino_BusSand_App_Meta_Journey_JourneyReplay__FailCode_2298250
                      (*(undefined4 *)(param_1 + 0x84),0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    Dino_BusSand_App_Meta_Journey_LevelJourney__Flow_229a104(0,lVar5,uVar6,lVar4,3,(long)iVar2,0,0);
  }
  return;
}

