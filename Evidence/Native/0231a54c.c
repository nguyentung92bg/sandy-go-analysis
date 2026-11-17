/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$get_Streak
Dino_BusSand_App_Meta_StreakRateFeature_o* Dino_BusSand_App_Meta_GameTracking__get_Streak (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$get_Streak
   Dino_BusSand_App_Meta_StreakRateFeature_o* Dino_BusSand_App_Meta_GameTracking__get_Streak (const
   MethodInfo* method); */

long Dino_BusSand_App_Meta_GameTracking__get_Streak_221a54c(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_04cac668;
  if ((bRam0000000004f9bd79 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf3e0);
    FUN_02132f7c(PTR_DAT_04cac668);
    bRam0000000004f9bd79 = 1;
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar1;
  }
  puVar1 = PTR_DAT_04caf3e0;
  if (*(char *)(*(long *)(lVar3 + 0xb8) + 8) == '\0') {
    return 0;
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar3 = *(long *)puVar1;
  if (*(long *)(lVar3 + 0x38) == 0) {
    FUN_02132f7c(PTR_DAT_04cb37f8);
    FUN_02132f7c(PTR_DAT_04cb3800);
    FUN_02132f7c(PTR_DAT_04cb3808);
    FUN_02132f7c(PTR_DAT_04cb3818);
    FUN_02132f7c(PTR_DAT_04cac668);
    if (*(long *)(lVar3 + 0x38) == 0) {
      FUN_0216b4cc(lVar3);
    }
  }
  puVar1 = PTR_DAT_04cac668;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  lVar4 = *(long *)PTR_DAT_04cac668;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar1;
  }
  if (**(long **)(lVar4 + 0xb8) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_38,**(long **)(lVar4 + 0xb8),*(undefined8 *)PTR_DAT_04cb3818);
    puVar1 = PTR_DAT_04cb3800;
    do {
      uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                        (&uStack_38,*(undefined8 *)puVar1);
      uVar2 = uStack_28;
      if ((uVar5 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_38,*(undefined8 *)PTR_DAT_04cb37f8);
        return 0;
      }
      lVar4 = **(long **)(lVar3 + 0x38);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0216b470(lVar4);
      }
      lVar4 = thunk_FUN_0216e7a0(uVar2,lVar4);
    } while (lVar4 == 0);
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_38,*(undefined8 *)PTR_DAT_04cb37f8);
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

