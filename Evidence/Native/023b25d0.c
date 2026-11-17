/* IL2CPP: Dino.BusSand.App.UI.PurchaseItemPanel$$OnBuyClick
void Dino_BusSand_App_UI_PurchaseItemPanel__OnBuyClick (Dino_BusSand_App_UI_PurchaseItemPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PurchaseItemPanel$$OnBuyClick
   void Dino_BusSand_App_UI_PurchaseItemPanel__OnBuyClick (Dino_BusSand_App_UI_PurchaseItemPanel_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_PurchaseItemPanel__OnBuyClick_22b25d0(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 uStack_24;
  
  if ((bRam0000000004f9c2d4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac5c0);
    FUN_02132f7c(PTR_DAT_04cac440);
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cad0e0);
    FUN_02132f7c(PTR_DAT_04cb6120);
    FUN_02132f7c(PTR_DAT_04cabb38);
    FUN_02132f7c(PTR_DAT_04cb1d38);
    FUN_02132f7c(PTR_DAT_04cad9e8);
    bRam0000000004f9c2d4 = 1;
  }
  if ((*(char *)(param_1 + 0x2c) != '\0') || (*(char *)(param_1 + 0x48) != '\0')) {
    return;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x40);
  if (*(int *)(*(long *)PTR_DAT_04cac440 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = Dino_BusSand_App_Meta_Economy__BuyShop_2203fd8(uVar1,1,0);
  if ((uVar5 & 1) != 0) {
    if ((bRam0000000004f9c2d7 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cad568);
      bRam0000000004f9c2d7 = 1;
    }
    puVar2 = PTR_DAT_04cad568;
    if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b94e == '\0') {
      FUN_02132f7c(PTR_DAT_04cad568);
      cRam0000000004f9b94e = '\x01';
    }
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar2;
    }
    if (**(long **)(lVar3 + 0xb8) != 0) {
      Dino_BusSand_GameAudio__Purchase_23830b8(**(long **)(lVar3 + 0xb8),0);
    }
    Dino_BusSand_App_UI_PurchaseItemPanel__FlyBooster_22b29b0(param_1);
    plVar4 = (long *)(param_1 + 0x38);
    lVar3 = *plVar4;
    *plVar4 = 0;
    thunk_FUN_02134474(plVar4,0);
    Dino_BusSand_App_UI_UIPanel__Close_21f509c(param_1,0);
    if (lVar3 == 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x023b25bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),1,*(undefined8 *)(lVar3 + 0x28));
    return;
  }
  plVar4 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,4);
  puVar2 = PTR_DAT_04cb1d38;
  if (plVar4 == (long *)0x0) {
LAB_023b28d4:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((*(long *)PTR_DAT_04cb1d38 != 0) &&
     (lVar3 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cb1d38,*(undefined8 *)(*plVar4 + 0x40)),
     lVar3 == 0)) {
LAB_023b28c8:
    uVar7 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar7,0);
  }
  if ((int)plVar4[3] != 0) {
    plVar4[4] = *(long *)puVar2;
    thunk_FUN_02134474();
    uStack_24 = *(undefined4 *)(param_1 + 0x40);
    lVar3 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_24);
    if ((lVar3 != 0) &&
       (lVar6 = thunk_FUN_0216e7a0(lVar3,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
    goto LAB_023b28c8;
    if ((*(uint *)(plVar4 + 3) & 0xfffffffe) != 0) {
      plVar4[5] = lVar3;
      thunk_FUN_02134474(plVar4 + 5,lVar3);
      puVar2 = PTR_DAT_04cad0e0;
      if ((*(long *)PTR_DAT_04cad0e0 != 0) &&
         (lVar3 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cad0e0,*(undefined8 *)(*plVar4 + 0x40)),
         lVar3 == 0)) goto LAB_023b28c8;
      if (2 < *(uint *)(plVar4 + 3)) {
        plVar4[6] = *(long *)puVar2;
        thunk_FUN_02134474();
        puVar2 = PTR_DAT_04cabb38;
        if ((*(long *)PTR_DAT_04cabb38 != 0) &&
           (lVar3 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cabb38,*(undefined8 *)(*plVar4 + 0x40)),
           lVar3 == 0)) goto LAB_023b28c8;
        if ((*(uint *)(plVar4 + 3) & 0xfffffffc) != 0) {
          plVar4[7] = *(long *)puVar2;
          thunk_FUN_02134474();
          if (*(int *)(*(long *)PTR_DAT_04cac5c0 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_App_Analytics__Log_216d0c8(*(undefined8 *)PTR_DAT_04cb6120,plVar4,0);
          plVar4 = (long *)Dino_BusSand_App_UI_UIPanel__Find_21f4108
                                     (param_1,*(undefined8 *)PTR_DAT_04cad9e8,0);
          if ((plVar4 != (long *)0x0) && (*plVar4 != *(long *)PTR_DAT_04cabdb0)) {
            plVar4 = (long *)0x0;
          }
          Dino_BusSand_App_UI_FailPanel__NopeButton_2317cf8(plVar4,0);
          puVar2 = PTR_DAT_04caba50;
          if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          if (cRam0000000004f9b88f == '\0') {
            FUN_02132f7c(PTR_DAT_04caba50);
            cRam0000000004f9b88f = '\x01';
          }
          lVar3 = *(long *)puVar2;
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar3 = *(long *)puVar2;
          }
          if (**(long **)(lVar3 + 0xb8) != 0) {
            Dino_BusSand_App_GameApp__OpenStore_2168098(**(long **)(lVar3 + 0xb8),1,0);
            return;
          }
          goto LAB_023b28d4;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0213322c();
}

