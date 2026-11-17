/* IL2CPP: Dino.BusSand.App.Meta.JourneyTracking$$LevelFinish
System_String_o* Dino_BusSand_App_Meta_JourneyTracking__LevelFinish (System_String_o* result, System_String_o* loseBy, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.Meta.JourneyTracking$$LevelFinish
   System_String_o* Dino_BusSand_App_Meta_JourneyTracking__LevelFinish (System_String_o* result,
   System_String_o* loseBy, const MethodInfo* method); */

undefined8 Dino_BusSand_App_Meta_JourneyTracking__LevelFinish_2213084(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  long *plVar8;
  undefined4 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  double dVar13;
  
  puVar3 = PTR_DAT_04cabce0;
  if ((bRam0000000004f9bd8f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caba90);
    FUN_02132f7c(PTR_DAT_04cabce0);
    FUN_02132f7c(PTR_DAT_04cac6a0);
    bRam0000000004f9bd8f = 1;
  }
  uVar7 = System_String__op_Equality_46d1108(param_1,*(undefined8 *)puVar3,0);
  if ((uVar7 & 1) == 0) {
    uVar4 = System_String__op_Equality_46d1108(param_1,*(undefined8 *)PTR_DAT_04cac6a0,0);
    uVar9 = 1;
    if ((uVar4 & 1) == 0) {
      uVar9 = 2;
    }
  }
  else {
    uVar4 = 0;
    uVar9 = 0;
  }
  puVar3 = PTR_DAT_04caba90;
  if (*(int *)(*(long *)PTR_DAT_04caba90 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_Meta_JourneyTracking__UiMark_22149d0(1,uVar9,0,0);
  plVar8 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
  lVar12 = *plVar8;
  *plVar8 = 0;
  thunk_FUN_02134474(plVar8,0);
  lVar10 = **(long **)(*(long *)puVar3 + 0xb8);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  iVar2 = *(int *)(*(long *)puVar3 + 0xe4);
  if ((*(char *)(lVar10 + 0x48) == '\0') || (lVar12 == 0)) {
    if (iVar2 == 0) {
      thunk_FUN_0218fdac();
      lVar10 = **(long **)(*(long *)puVar3 + 0xb8);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
    }
    Dino_BusSand_App_Meta_Journey_LevelJourney__Close_2299bcc(lVar10,0);
    uVar11 = 0;
  }
  else {
    if (iVar2 == 0) {
      thunk_FUN_0218fdac();
      lVar10 = **(long **)(*(long *)puVar3 + 0xb8);
    }
    uVar11 = *(undefined8 *)(lVar12 + 0x78);
    dVar13 = (double)UnityEngine_Time__get_realtimeSinceStartupAsDouble_43cd760(0);
    lVar1 = -0x8000000000000000;
    if (dVar13 * _UNK_00e6a6f0 != INFINITY) {
      lVar1 = (long)(dVar13 * _UNK_00e6a6f0);
    }
    if ((uVar4 & 1) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = Dino_BusSand_App_Meta_Journey_JourneyReplay__FailCode_2298250
                        (*(undefined4 *)(lVar12 + 0x84),0);
      uVar9 = 1;
    }
    if (*(long *)(lVar12 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar6 = Dino_BusSand_Core_TruckGrid__get_Count_24236a8(*(long *)(lVar12 + 0x28),0);
    if (*(long *)(lVar12 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(long *)(lVar12 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar11 = Dino_BusSand_App_Meta_Journey_LevelJourney__Finish_229a1c8
                       (lVar10,uVar11,lVar1,uVar9,uVar5,uVar6,
                        *(undefined4 *)(*(long *)(lVar12 + 0x18) + 0x70),
                        *(undefined4 *)(*(long *)(lVar12 + 0x20) + 0x38),0);
  }
  return uVar11;
}

