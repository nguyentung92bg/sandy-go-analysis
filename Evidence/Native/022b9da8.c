/* IL2CPP: Dino.BusSand.App.UI.GoldenView.<>c__DisplayClass11_0$$<Rows>b__0
System_Collections_Generic_List_KeyValuePair_int__long___o* Dino_BusSand_App_UI_GoldenView___c__DisplayClass11_0___Rows_b__0 (Dino_BusSand_App_UI_GoldenView___c__DisplayClass11_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GoldenView.<>c__DisplayClass11_0$$<Rows>b__0
   System_Collections_Generic_List_KeyValuePair_int__long___o*
   Dino_BusSand_App_UI_GoldenView___c__DisplayClass11_0___Rows_b__0
   (Dino_BusSand_App_UI_GoldenView___c__DisplayClass11_0_o* __this, const MethodInfo* method); */

long Dino_BusSand_App_UI_GoldenView___c__DisplayClass11_0___Rows_b__0_21b9da8(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (lVar9 = *(long *)(*(long *)(param_1 + 0x20) + 0x10), lVar9 != 0)) {
    uVar5 = Dino_BusSand_App_Meta_GiftPackFeature__get_GoldenPackId_223b618(lVar9,0);
    iVar6 = Dino_BusSand_App_Meta_GiftPackFeature__ClaimGoldenStage_223cc74
                      (lVar9,uVar5,*(undefined4 *)(param_1 + 0x10),0);
    puVar4 = PTR_DAT_04cae910;
    puVar3 = PTR_DAT_04caca60;
    puVar2 = PTR_DAT_04caca50;
    if (iVar6 < 1) {
      return 0;
    }
    if ((bRam0000000004f9baaf & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cae910);
      FUN_02132f7c(PTR_DAT_04cae058);
      FUN_02132f7c(PTR_DAT_04caca50);
      FUN_02132f7c(PTR_DAT_04caca60);
      bRam0000000004f9baaf = 1;
    }
    lVar9 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
    System_Collections_Generic_List_KeyValuePair_int__long_____ctor_3964fac
              (lVar9,*(undefined8 *)puVar2);
    uStack_40 = 0;
    uStack_38 = 0;
    System_Collections_Generic_KeyValuePair_int__long____ctor_390da2c
              (&uStack_40,0x3e9,iVar6,*(undefined8 *)puVar4);
    if (lVar9 != 0) {
      lVar7 = *(long *)(lVar9 + 0x10);
      lVar8 = *(long *)PTR_DAT_04cae058;
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      if (lVar7 != 0) {
        uVar1 = *(uint *)(lVar9 + 0x18);
        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
          lVar7 = lVar7 + (long)(int)uVar1 * 0x10;
          *(uint *)(lVar9 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar7 + 0x20) = uStack_40;
          *(undefined8 *)(lVar7 + 0x28) = uStack_38;
        }
        else {
          System_Collections_Generic_List_KeyValuePair_int__long____AddWithResize_3965844
                    (lVar9,uStack_40,uStack_38,
                     *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        }
        return lVar9;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

