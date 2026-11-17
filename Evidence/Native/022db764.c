/* IL2CPP: Dino.BusSand.App.UI.PassportUi$$FlyBankCoins
void Dino_BusSand_App_UI_PassportUi__FlyBankCoins (Dino_BusSand_App_Meta_PassportFeature_o* f, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PassportUi$$FlyBankCoins
   void Dino_BusSand_App_UI_PassportUi__FlyBankCoins (Dino_BusSand_App_Meta_PassportFeature_o* f,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_PassportUi__FlyBankCoins_21db764(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000004f9bb86 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caec68);
    FUN_02132f7c(PTR_DAT_04cae910);
    FUN_02132f7c(PTR_DAT_04cae058);
    FUN_02132f7c(PTR_DAT_04caca50);
    FUN_02132f7c(PTR_DAT_04caca60);
    bRam0000000004f9bb86 = 1;
  }
  if ((param_1 != 0) && (0 < *(long *)(param_1 + 0x28))) {
    lVar2 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca60);
    System_Collections_Generic_List_KeyValuePair_int__long_____ctor_3964fac
              (lVar2,*(undefined8 *)PTR_DAT_04caca50);
    uStack_40 = 0;
    uStack_38 = 0;
    System_Collections_Generic_KeyValuePair_int__long____ctor_390da2c
              (&uStack_40,0x3e9,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_04cae910);
    if (lVar2 != 0) {
      lVar3 = *(long *)(lVar2 + 0x10);
      lVar5 = *(long *)PTR_DAT_04cae058;
      *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
      if (lVar3 != 0) {
        uVar1 = *(uint *)(lVar2 + 0x18);
        if (uVar1 < *(uint *)(lVar3 + 0x18)) {
          lVar3 = lVar3 + (long)(int)uVar1 * 0x10;
          *(uint *)(lVar2 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar3 + 0x20) = uStack_40;
          *(undefined8 *)(lVar3 + 0x28) = uStack_38;
        }
        else {
                    /* try { // try from 022db86c to 023db8a7 has its CatchHandler @ 022dbb8c */
          System_Collections_Generic_List_KeyValuePair_int__long____AddWithResize_3965844
                    (lVar2,uStack_40,uStack_38,
                     *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        }
        if (cRam0000000004f9b65d == '\0') {
          FUN_02132f7c(PTR_DAT_04caa208);
          cRam0000000004f9b65d = '\x01';
        }
        puVar4 = *(undefined4 **)(*(long *)PTR_DAT_04caa208 + 0xb8);
        uVar6 = *puVar4;
        uVar7 = puVar4[1];
        uVar8 = puVar4[2];
        if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_UI_GiftPackUi__Fly_21ab544(uVar6,uVar7,uVar8,lVar2,0,0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  return;
}

