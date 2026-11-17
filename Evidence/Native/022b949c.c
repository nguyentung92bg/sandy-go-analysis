/* IL2CPP: Dino.BusSand.App.UI.PassportView.<>c__DisplayClass9_0$$<Rows>b__0
System_Collections_Generic_List_KeyValuePair_int__long___o* Dino_BusSand_App_UI_PassportView___c__DisplayClass9_0___Rows_b__0 (Dino_BusSand_App_UI_PassportView___c__DisplayClass9_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PassportView.<>c__DisplayClass9_0$$<Rows>b__0
   System_Collections_Generic_List_KeyValuePair_int__long___o*
   Dino_BusSand_App_UI_PassportView___c__DisplayClass9_0___Rows_b__0
   (Dino_BusSand_App_UI_PassportView___c__DisplayClass9_0_o* __this, const MethodInfo* method); */

long Dino_BusSand_App_UI_PassportView___c__DisplayClass9_0___Rows_b__0_21b949c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_DAT_04caca60;
  puVar1 = PTR_DAT_04caca50;
  if ((bRam0000000004f9bab3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf688);
    FUN_02132f7c(PTR_DAT_04caca50);
    FUN_02132f7c(PTR_DAT_04caca60);
    bRam0000000004f9bab3 = 1;
  }
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Collections_Generic_List_KeyValuePair_int__long_____ctor_3964fac
            (lVar3,*(undefined8 *)puVar1);
  if ((*(long *)(param_1 + 0x18) == 0) ||
     (lVar4 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar4 == 0)) goto LAB_022b9630;
  uVar5 = Dino_BusSand_App_Meta_PassportFeature__IsFreeClaimed_2246fe4
                    (lVar4,*(undefined4 *)(param_1 + 0x10),0);
  if ((uVar5 & 1) == 0) {
    if ((*(long *)(param_1 + 0x18) == 0) ||
       (lVar4 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar4 == 0)) goto LAB_022b9630;
    uVar5 = Dino_BusSand_App_Meta_PassportFeature__ClaimFree_2247974
                      (lVar4,*(undefined4 *)(param_1 + 0x10),0);
    if ((uVar5 & 1) != 0) {
      if ((*(long *)(param_1 + 0x18) == 0) ||
         (lVar4 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar4 == 0)) goto LAB_022b9630;
      Dino_BusSand_App_Meta_PassportFeature__FreeRewards_2245140
                (lVar4,*(undefined4 *)(param_1 + 0x10),0);
      uVar6 = Dino_BusSand_App_UI_Rw__Of_21b8a40();
      if (lVar3 == 0) goto LAB_022b9630;
      System_Collections_Generic_List_KeyValuePair_int__long____AddRange_3965a54
                (lVar3,uVar6,*(undefined8 *)PTR_DAT_04caf688);
    }
  }
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (lVar4 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar4 != 0)) {
    uVar5 = Dino_BusSand_App_Meta_PassportFeature__get_IsPurchased_22463a8(lVar4,0);
    if ((uVar5 & 1) == 0) {
      return lVar3;
    }
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (lVar4 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar4 != 0)) {
      uVar5 = Dino_BusSand_App_Meta_PassportFeature__IsPassClaimed_2247094
                        (lVar4,*(undefined4 *)(param_1 + 0x10),0);
      if ((uVar5 & 1) != 0) {
        return lVar3;
      }
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (lVar4 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar4 != 0)) {
        uVar5 = Dino_BusSand_App_Meta_PassportFeature__ClaimPass_2248320
                          (lVar4,*(undefined4 *)(param_1 + 0x10),0);
        if ((uVar5 & 1) == 0) {
          return lVar3;
        }
        if ((*(long *)(param_1 + 0x18) != 0) &&
           (lVar4 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar4 != 0)) {
          Dino_BusSand_App_Meta_PassportFeature__PassRewards_2245198
                    (lVar4,*(undefined4 *)(param_1 + 0x10),0);
          uVar6 = Dino_BusSand_App_UI_Rw__Of_21b8a40();
          if (lVar3 != 0) {
            System_Collections_Generic_List_KeyValuePair_int__long____AddRange_3965a54
                      (lVar3,uVar6,*(undefined8 *)PTR_DAT_04caf688);
            return lVar3;
          }
        }
      }
    }
  }
LAB_022b9630:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

