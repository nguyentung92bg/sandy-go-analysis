/* IL2CPP: Dino.BusSand.App.Meta.WelcomeBack$$Claim
System_Collections_Generic_List_KeyValuePair_int__long___o* Dino_BusSand_App_Meta_WelcomeBack__Claim (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.WelcomeBack$$Claim
   System_Collections_Generic_List_KeyValuePair_int__long___o*
   Dino_BusSand_App_Meta_WelcomeBack__Claim (const MethodInfo* method); */

undefined8 Dino_BusSand_App_Meta_WelcomeBack__Claim_220ed38(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined4 uStack_34;
  
  puVar2 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9bd2a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac5c0);
    FUN_02132f7c(PTR_DAT_04caca50);
    FUN_02132f7c(PTR_DAT_04caca60);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cb2220);
    FUN_02132f7c(PTR_DAT_04cb2228);
    FUN_02132f7c(PTR_DAT_04cb1e90);
    bRam0000000004f9bd2a = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
  puVar3 = PTR_DAT_04cb1e90;
  puVar1 = PTR_DAT_04ca9c20;
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
  if (lVar4 != 0) {
    if (*(char *)(lVar4 + 0x1a0) == '\0') {
      uVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca60);
      System_Collections_Generic_List_KeyValuePair_int__long_____ctor_3964fac
                (uVar5,*(undefined8 *)PTR_DAT_04caca50);
      return uVar5;
    }
    uVar5 = Dino_BusSand_App_Meta_Monetization__get_WelcomeBackRewards_2268644(0);
    Dino_BusSand_App_Meta_RewardList__Grant_220d370(uVar5,*(undefined8 *)puVar3,1);
    lVar6 = *(long *)puVar2;
    *(undefined1 *)(lVar4 + 0x1a0) = 0;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar7 = Dino_BusSand_App_Meta_Profile__Day_2271100(0);
    *(undefined8 *)(lVar4 + 0x198) = uVar7;
    Dino_BusSand_App_Meta_Profile__Save_226c548(0);
    plVar8 = (long *)FUN_02133068(*(undefined8 *)puVar1,2);
    puVar2 = PTR_DAT_04cb2228;
    if (plVar8 != (long *)0x0) {
      if ((*(long *)PTR_DAT_04cb2228 != 0) &&
         (lVar4 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cb2228,*(undefined8 *)(*plVar8 + 0x40)),
         lVar4 == 0)) {
LAB_0230ef8c:
        uVar5 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
        FUN_021330e8(uVar5,0);
      }
      if ((int)plVar8[3] != 0) {
        plVar8[4] = *(long *)puVar2;
        thunk_FUN_02134474();
        uStack_34 = Dino_BusSand_App_Meta_Profile__get_DaysAway_2271f98(0);
        lVar4 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_34);
        if ((lVar4 != 0) &&
           (lVar6 = thunk_FUN_0216e7a0(lVar4,*(undefined8 *)(*plVar8 + 0x40)), lVar6 == 0))
        goto LAB_0230ef8c;
        puVar1 = PTR_DAT_04cb2220;
        puVar2 = PTR_DAT_04cac5c0;
        if ((*(uint *)(plVar8 + 3) & 0xfffffffe) != 0) {
          plVar8[5] = lVar4;
          thunk_FUN_02134474(plVar8 + 5,lVar4);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_App_Analytics__Log_216d0c8(*(undefined8 *)puVar1,plVar8,0);
          return uVar5;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

