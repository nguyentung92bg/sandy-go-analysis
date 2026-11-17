/* IL2CPP: Dino.BusSand.App.Meta.WinChest$$Open
System_Collections_Generic_List_KeyValuePair_int__long___o* Dino_BusSand_App_Meta_WinChest__Open (int32_t times, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.WinChest$$Open
   System_Collections_Generic_List_KeyValuePair_int__long___o* Dino_BusSand_App_Meta_WinChest__Open
   (int32_t times, const MethodInfo* method); */

undefined8 Dino_BusSand_App_Meta_WinChest__Open_220dba8(int param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  int iStack_38;
  undefined4 uStack_34;
  
  puVar2 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9bd1e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac5c0);
    FUN_02132f7c(PTR_DAT_04caca50);
    FUN_02132f7c(PTR_DAT_04caca60);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cb21c8);
    FUN_02132f7c(PTR_DAT_04cb21d0);
    FUN_02132f7c(PTR_DAT_04cb21d8);
    FUN_02132f7c(PTR_DAT_04cb21e0);
    FUN_02132f7c(PTR_DAT_04cb1eb8);
    bRam0000000004f9bd1e = 1;
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
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
  uVar5 = Dino_BusSand_App_Meta_Monetization__get_WinChestRewards_2267e00(0);
  uVar5 = Dino_BusSand_App_Meta_RewardList__Times_220d4f8(uVar5,1);
  if (lVar4 != 0) {
    if (*(char *)(lVar4 + 0x180) == '\0') {
      uVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca60);
      System_Collections_Generic_List_KeyValuePair_int__long_____ctor_3964fac
                (uVar5,*(undefined8 *)PTR_DAT_04caca50);
      return uVar5;
    }
    Dino_BusSand_App_Meta_RewardList__Grant_220d370(uVar5,*(undefined8 *)PTR_DAT_04cb1eb8,1);
    if (1 < param_1) {
      Dino_BusSand_App_Meta_RewardList__Grant_220d370
                (uVar5,*(undefined8 *)PTR_DAT_04cb21e0,param_1 + -1);
    }
    puVar3 = PTR_DAT_04ca9c20;
    lVar6 = *(long *)puVar2;
    *(undefined1 *)(lVar4 + 0x180) = 0;
    iVar1 = *(int *)(lVar6 + 0xe4);
    *(undefined4 *)(lVar4 + 0x178) = 0;
    *(int *)(lVar4 + 0x17c) = *(int *)(lVar4 + 0x17c) + 1;
    if (iVar1 == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Meta_Profile__Save_226c548(0);
    plVar7 = (long *)FUN_02133068(*(undefined8 *)puVar3,4);
    puVar2 = PTR_DAT_04cb21c8;
    if (plVar7 != (long *)0x0) {
      if ((*(long *)PTR_DAT_04cb21c8 != 0) &&
         (lVar6 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cb21c8,*(undefined8 *)(*plVar7 + 0x40)),
         lVar6 == 0)) {
LAB_0230ded0:
        uVar5 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
        FUN_021330e8(uVar5,0);
      }
      if ((int)plVar7[3] != 0) {
        plVar7[4] = *(long *)puVar2;
        thunk_FUN_02134474();
        puVar2 = PTR_DAT_04ca9ac8;
        uStack_34 = *(undefined4 *)(lVar4 + 0x17c);
        lVar4 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_34);
        if ((lVar4 != 0) &&
           (lVar6 = thunk_FUN_0216e7a0(lVar4,*(undefined8 *)(*plVar7 + 0x40)), lVar6 == 0))
        goto LAB_0230ded0;
        puVar3 = PTR_DAT_04cb21d0;
        if ((*(uint *)(plVar7 + 3) & 0xfffffffe) != 0) {
          plVar7[5] = lVar4;
          thunk_FUN_02134474(plVar7 + 5,lVar4);
          lVar4 = *(long *)puVar3;
          if ((lVar4 != 0) &&
             (lVar4 = thunk_FUN_0216e7a0(lVar4,*(undefined8 *)(*plVar7 + 0x40)), lVar4 == 0))
          goto LAB_0230ded0;
          if (2 < *(uint *)(plVar7 + 3)) {
            plVar7[6] = *(long *)puVar3;
            thunk_FUN_02134474();
            iStack_38 = param_1;
            lVar4 = FUN_02133100(*(undefined8 *)(puVar2 + 0x48),&iStack_38);
            if ((lVar4 != 0) &&
               (lVar6 = thunk_FUN_0216e7a0(lVar4,*(undefined8 *)(*plVar7 + 0x40)), lVar6 == 0))
            goto LAB_0230ded0;
            puVar3 = PTR_DAT_04cb21d8;
            puVar2 = PTR_DAT_04cac5c0;
            if ((*(uint *)(plVar7 + 3) & 0xfffffffc) != 0) {
              plVar7[7] = lVar4;
              thunk_FUN_02134474(plVar7 + 7,lVar4);
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              Dino_BusSand_App_Analytics__Log_216d0c8(*(undefined8 *)puVar3,plVar7,0);
              uVar5 = Dino_BusSand_App_Meta_RewardList__Times_220d4f8(uVar5,param_1);
              return uVar5;
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

