/* IL2CPP: Dino.BusSand.App.Meta.JourneyTracking$$Revive
void Dino_BusSand_App_Meta_JourneyTracking__Revive (Dino_BusSand_Core_StageEngine_o* e, int32_t buses, float seconds, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.Meta.JourneyTracking$$Revive
   void Dino_BusSand_App_Meta_JourneyTracking__Revive (Dino_BusSand_Core_StageEngine_o* e, int32_t
   buses, float seconds, const MethodInfo* method); */

void Dino_BusSand_App_Meta_JourneyTracking__Revive_221cd9c
               (undefined4 param_1,long param_2,int param_3)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  double dVar7;
  
  puVar3 = PTR_DAT_04caba90;
  if ((bRam0000000004f9bd9c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caba90);
    bRam0000000004f9bd9c = 1;
  }
  lVar4 = *(long *)puVar3;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar3;
  }
  iVar2 = *(int *)(*(long *)(lVar4 + 0xb8) + 0x24);
  *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0x24) = 3;
  uVar5 = Dino_BusSand_App_Meta_JourneyTracking__Recording_221b330(param_2);
  if ((uVar5 & 1) != 0) {
    lVar4 = *(long *)puVar3;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar4 = *(long *)puVar3;
    }
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar6 = *(undefined8 *)(param_2 + 0x78);
    lVar4 = **(long **)(lVar4 + 0xb8);
    dVar7 = (double)UnityEngine_Time__get_realtimeSinceStartupAsDouble_43cd760(0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar1 = -0x8000000000000000;
    if (dVar7 * _UNK_00e6a6f0 != INFINITY) {
      lVar1 = (long)(dVar7 * _UNK_00e6a6f0);
    }
    Dino_BusSand_App_Meta_Journey_LevelJourney__Flow_229a104
              (param_1,lVar4,uVar6,lVar1,4,(long)iVar2,(long)param_3,0);
  }
  return;
}

