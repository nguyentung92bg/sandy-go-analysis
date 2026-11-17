/* IL2CPP: Dino.BusSand.App.Meta.JourneyTracking$$LevelSnapshot
System_String_o* Dino_BusSand_App_Meta_JourneyTracking__LevelSnapshot (bool external, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.Meta.JourneyTracking$$LevelSnapshot
   System_String_o* Dino_BusSand_App_Meta_JourneyTracking__LevelSnapshot (bool external, const
   MethodInfo* method); */

undefined8 Dino_BusSand_App_Meta_JourneyTracking__LevelSnapshot_2214db8(ulong param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  
  puVar1 = PTR_DAT_04caba90;
  if ((bRam0000000004f9bd90 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caba90);
    bRam0000000004f9bd90 = 1;
  }
  lVar3 = *(long *)puVar1;
                    /* catch() { ... } // from try @ 02314f14 with catch @ 02314df8
                       catch() { ... } // from try @ 023152c0 with catch @ 02314df8
                       catch() { ... } // from try @ 023152cc with catch @ 02314df8
                       catch() { ... } // from try @ 023152dc with catch @ 02314df8 */
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar1;
  }
  plVar5 = *(long **)(lVar3 + 0xb8);
  lVar6 = *plVar5;
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar7 = plVar5[2];
  if (*(char *)(lVar6 + 0x48) == '\0' || lVar7 == 0) {
    uVar4 = 0;
  }
  else {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar1;
      plVar5 = *(long **)(lVar3 + 0xb8);
      lVar6 = *plVar5;
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
    }
    *(undefined4 *)(plVar5 + 6) = *(undefined4 *)(lVar6 + 0x4c);
    if ((param_1 & 1) == 0) {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar6 = **(long **)(*(long *)puVar1 + 0xb8);
      }
      uVar4 = *(undefined8 *)(lVar7 + 0x78);
      dVar8 = (double)UnityEngine_Time__get_realtimeSinceStartupAsDouble_43cd760(0);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar3 = -0x8000000000000000;
      if (dVar8 * _UNK_00e6a6f0 != INFINITY) {
        lVar3 = (long)(dVar8 * _UNK_00e6a6f0);
      }
      Dino_BusSand_App_Meta_Journey_LevelJourney__Flow_229a104(0,lVar6,uVar4,lVar3,1,0,0,0);
      lVar3 = *(long *)puVar1;
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar1;
    }
    uVar4 = *(undefined8 *)(lVar7 + 0x78);
    lVar6 = **(long **)(lVar3 + 0xb8);
    dVar8 = (double)UnityEngine_Time__get_realtimeSinceStartupAsDouble_43cd760(0);
                    /* try { // try from 02314f04 to 02414f13 has its CatchHandler @ 023152e4 */
    lVar3 = -0x8000000000000000;
    if (dVar8 * _UNK_00e6a6f0 != INFINITY) {
      lVar3 = (long)(dVar8 * _UNK_00e6a6f0);
    }
                    /* try { // try from 02314f14 to 024152bb has its CatchHandler @ 02314df8 */
    if (*(long *)(lVar7 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar2 = Dino_BusSand_Core_TruckGrid__get_Count_24236a8(*(long *)(lVar7 + 0x28),0);
    if (*(long *)(lVar7 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(long *)(lVar7 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar4 = Dino_BusSand_App_Meta_Journey_LevelJourney__Snapshot_229a300
                      (lVar6,uVar4,lVar3,uVar2,*(undefined4 *)(*(long *)(lVar7 + 0x18) + 0x70),
                       *(undefined4 *)(*(long *)(lVar7 + 0x20) + 0x38),0);
  }
  return uVar4;
}

