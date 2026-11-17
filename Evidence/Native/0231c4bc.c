/* IL2CPP: Dino.BusSand.App.Meta.JourneyTracking$$Boost
void Dino_BusSand_App_Meta_JourneyTracking__Boost (Dino_BusSand_Core_StageEngine_o* e, int32_t itemId, int32_t action, int64_t arg, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.Meta.JourneyTracking$$Boost
   void Dino_BusSand_App_Meta_JourneyTracking__Boost (Dino_BusSand_Core_StageEngine_o* e, int32_t
   itemId, int32_t action, int64_t arg, const MethodInfo* method); */

void Dino_BusSand_App_Meta_JourneyTracking__Boost_221c4bc
               (long param_1,int param_2,undefined4 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  double dVar7;
  
  puVar2 = PTR_DAT_04caba90;
  if ((bRam0000000004f9bd96 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caba90);
    bRam0000000004f9bd96 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (param_2 < 0x2713) {
    if (param_2 == 0x3eb) {
      uVar6 = 5;
    }
    else if (param_2 == 0x2711) {
      uVar6 = 4;
    }
    else {
      if (param_2 != 0x2712) {
        return;
      }
      uVar6 = 0;
    }
  }
  else if (param_2 == 0x2713) {
    uVar6 = 1;
  }
  else if (param_2 == 0x2714) {
    uVar6 = 2;
  }
  else {
    if (param_2 != 0x2715) {
      return;
    }
    uVar6 = 3;
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
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar5 = *(undefined8 *)(param_1 + 0x78);
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
    Dino_BusSand_App_Meta_Journey_LevelJourney__Boost_229a074
              (lVar4,uVar5,lVar1,uVar6,param_3,param_4,0);
  }
  return;
}

