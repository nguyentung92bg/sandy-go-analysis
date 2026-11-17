/* IL2CPP: Dino.BusSand.App.UI.Rw$$Coins
System_Collections_Generic_List_KeyValuePair_int__long___o* Dino_BusSand_App_UI_Rw__Coins (int64_t n, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.Rw$$Coins
   System_Collections_Generic_List_KeyValuePair_int__long___o* Dino_BusSand_App_UI_Rw__Coins
   (int64_t n, const MethodInfo* method); */

long Dino_BusSand_App_UI_Rw__Coins_21b8c58(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar4 = PTR_DAT_04cae910;
  puVar3 = PTR_DAT_04caca60;
  puVar2 = PTR_DAT_04caca50;
  if ((bRam0000000004f9baaf & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae910);
    FUN_02132f7c(PTR_DAT_04cae058);
    FUN_02132f7c(PTR_DAT_04caca50);
    FUN_02132f7c(PTR_DAT_04caca60);
    bRam0000000004f9baaf = 1;
  }
  lVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Collections_Generic_List_KeyValuePair_int__long_____ctor_3964fac
            (lVar5,*(undefined8 *)puVar2);
  uStack_40 = 0;
  uStack_38 = 0;
  System_Collections_Generic_KeyValuePair_int__long____ctor_390da2c
            (&uStack_40,0x3e9,param_1,*(undefined8 *)puVar4);
  if (lVar5 != 0) {
    lVar6 = *(long *)(lVar5 + 0x10);
    lVar7 = *(long *)PTR_DAT_04cae058;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar6 != 0) {
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        lVar6 = lVar6 + (long)(int)uVar1 * 0x10;
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar6 + 0x20) = uStack_40;
        *(undefined8 *)(lVar6 + 0x28) = uStack_38;
      }
      else {
        System_Collections_Generic_List_KeyValuePair_int__long____AddWithResize_3965844
                  (lVar5,uStack_40,uStack_38,
                   *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
      }
      return lVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

