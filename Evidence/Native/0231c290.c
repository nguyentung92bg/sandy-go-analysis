/* IL2CPP: Dino.BusSand.App.Meta.JourneyTracking$$OnHint
void Dino_BusSand_App_Meta_JourneyTracking__OnHint (Dino_BusSand_Core_StageEngine_o* e, int32_t truckId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.Meta.JourneyTracking$$OnHint
   void Dino_BusSand_App_Meta_JourneyTracking__OnHint (Dino_BusSand_Core_StageEngine_o* e, int32_t
   truckId, const MethodInfo* method); */

void Dino_BusSand_App_Meta_JourneyTracking__OnHint_221c290(long param_1,int param_2)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  double dVar7;
  
  puVar2 = PTR_DAT_04caba90;
  if ((bRam0000000004f9bd95 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caba90);
    bRam0000000004f9bd95 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = Dino_BusSand_App_Meta_JourneyTracking__Recording_221b330(param_1);
  if ((uVar3 & 1) != 0) {
    lVar4 = *(long *)puVar2;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar4 = *(long *)puVar2;
    }
    plVar5 = *(long **)(lVar4 + 0xb8);
    if ((int)plVar5[5] == param_2) {
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar4 = *(long *)puVar2;
        plVar5 = *(long **)(lVar4 + 0xb8);
      }
      if (*plVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (*(int *)(*plVar5 + 0x4c) == *(int *)((long)plVar5 + 0x2c)) {
        return;
      }
    }
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar4 = *(long *)puVar2;
    }
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar6 = *(undefined8 *)(param_1 + 0x78);
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
              (0,lVar4,uVar6,lVar1,2,(long)param_2,0,0);
    plVar5 = *(long **)(*(long *)puVar2 + 0xb8);
    *(int *)(plVar5 + 5) = param_2;
    if (*plVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    *(undefined4 *)((long)plVar5 + 0x2c) = *(undefined4 *)(*plVar5 + 0x4c);
  }
  return;
}

