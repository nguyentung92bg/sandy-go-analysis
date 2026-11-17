/* IL2CPP: Dino.BusSand.App.Meta.StoreReview.<>c__DisplayClass1_0$$<Request>b__0
void Dino_BusSand_App_Meta_StoreReview___c__DisplayClass1_0___Request_b__0 (Dino_BusSand_App_Meta_StoreReview___c__DisplayClass1_0_o* __this, bool ok, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.StoreReview.<>c__DisplayClass1_0$$<Request>b__0
   void Dino_BusSand_App_Meta_StoreReview___c__DisplayClass1_0___Request_b__0
   (Dino_BusSand_App_Meta_StoreReview___c__DisplayClass1_0_o* __this, bool ok, const MethodInfo*
   method); */

void Dino_BusSand_App_Meta_StoreReview___c__DisplayClass1_0___Request_b__0_2274c1c
               (long param_1,byte param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  byte abStack_34 [4];
  
  if ((bRam0000000004f9c115 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac5c0);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04cb4838);
    FUN_02132f7c(PTR_DAT_04cb4840);
    bRam0000000004f9c115 = 1;
  }
  puVar1 = PTR_DAT_04ca9c20;
  if ((param_2 & 1) == 0) {
    Dino_BusSand_App_Meta_StoreReview__OpenStorePage_2274b9c();
  }
  plVar3 = (long *)FUN_02133068(*(undefined8 *)puVar1,2);
  puVar1 = PTR_DAT_04cb4838;
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((*(long *)PTR_DAT_04cb4838 != 0) &&
     (lVar4 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cb4838,*(undefined8 *)(*plVar3 + 0x40)),
     lVar4 == 0)) {
LAB_02374d88:
    uVar6 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar6,0);
  }
  if ((int)plVar3[3] != 0) {
    plVar3[4] = *(long *)puVar1;
    thunk_FUN_02134474();
    abStack_34[0] = param_2 & 1;
    lVar4 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x28),abStack_34);
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_0216e7a0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
    goto LAB_02374d88;
    puVar2 = PTR_DAT_04cb4840;
    puVar1 = PTR_DAT_04cac5c0;
    if ((*(uint *)(plVar3 + 3) & 0xfffffffe) != 0) {
      plVar3[5] = lVar4;
      thunk_FUN_02134474(plVar3 + 5,lVar4);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_Analytics__Log_216d0c8(*(undefined8 *)puVar2,plVar3,0);
      lVar4 = *(long *)(param_1 + 0x10);
      if (lVar4 != 0) {
        (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0213322c();
}

