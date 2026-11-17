/* IL2CPP: Dino.BusSand.App.Meta.StuckHelp$$Claim
System_Collections_Generic_List_KeyValuePair_int__long___o* Dino_BusSand_App_Meta_StuckHelp__Claim (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.StuckHelp$$Claim
   System_Collections_Generic_List_KeyValuePair_int__long___o*
   Dino_BusSand_App_Meta_StuckHelp__Claim (const MethodInfo* method); */

undefined8 Dino_BusSand_App_Meta_StuckHelp__Claim_220f0dc(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  undefined4 uStack_24;
  
  puVar2 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9bd2d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac5c0);
    FUN_02132f7c(PTR_DAT_04caca50);
    FUN_02132f7c(PTR_DAT_04caca60);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cabb48);
    FUN_02132f7c(PTR_DAT_04cb1e60);
    FUN_02132f7c(PTR_DAT_04cb2230);
    bRam0000000004f9bd2d = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar2;
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
  uVar6 = Dino_BusSand_App_Meta_StuckHelp__get_Offered_220f008();
  puVar4 = PTR_DAT_04cb1e60;
  puVar3 = PTR_DAT_04caca50;
  if ((uVar6 & 1) == 0) {
    uVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca60);
    System_Collections_Generic_List_KeyValuePair_int__long_____ctor_3964fac
              (uVar7,*(undefined8 *)puVar3);
    return uVar7;
  }
  uVar7 = Dino_BusSand_App_Meta_Monetization__get_StuckHelpRewards_2268738(0);
  Dino_BusSand_App_Meta_RewardList__Grant_220d370(uVar7,*(undefined8 *)puVar4,1);
  if (lVar5 != 0) {
    iVar1 = *(int *)(*(long *)puVar2 + 0xe4);
    *(undefined4 *)(lVar5 + 0x1a4) = *(undefined4 *)(lVar5 + 0x14);
    if (iVar1 == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Meta_Profile__Save_226c548(0);
    plVar8 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,2);
    puVar2 = PTR_DAT_04cabb48;
    if (plVar8 != (long *)0x0) {
      if ((*(long *)PTR_DAT_04cabb48 != 0) &&
         (lVar9 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cabb48,*(undefined8 *)(*plVar8 + 0x40)),
         lVar9 == 0)) {
LAB_0230f318:
        uVar7 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
        FUN_021330e8(uVar7,0);
      }
      if ((int)plVar8[3] != 0) {
        plVar8[4] = *(long *)puVar2;
        thunk_FUN_02134474();
        uStack_24 = *(undefined4 *)(lVar5 + 0x80);
        lVar5 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_24);
        if ((lVar5 != 0) &&
           (lVar9 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
        goto LAB_0230f318;
        if ((*(uint *)(plVar8 + 3) & 0xfffffffe) != 0) {
          plVar8[5] = lVar5;
          thunk_FUN_02134474(plVar8 + 5,lVar5);
          if (*(int *)(*(long *)PTR_DAT_04cac5c0 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_App_Analytics__Log_216d0c8(*(undefined8 *)PTR_DAT_04cb2230,plVar8,0);
          return uVar7;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

