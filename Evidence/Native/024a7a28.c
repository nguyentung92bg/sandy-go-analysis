/* IL2CPP: Dino.BusSand.View.GameView$$UpdateRoute
void Dino_BusSand_View_GameView__UpdateRoute (Dino_BusSand_View_GameView_o* __this, int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.GameView$$UpdateRoute
   void Dino_BusSand_View_GameView__UpdateRoute (Dino_BusSand_View_GameView_o* __this, int32_t id,
   const MethodInfo* method); */

void Dino_BusSand_View_GameView__UpdateRoute_23a7a28(long param_1,undefined4 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uStack_28;
  
  if ((bRam0000000004f9c92e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbb010);
    FUN_02132f7c(PTR_DAT_04cbc4a8);
    FUN_02132f7c(PTR_DAT_04cb2870);
    bRam0000000004f9c92e = 1;
  }
  uStack_28 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x28), lVar1 != 0)) {
    uVar2 = Dino_BusSand_Core_TruckGrid__TryGet_241d34c(lVar1,param_2,&uStack_28,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
    lVar1 = *(long *)(param_1 + 0xf8);
    uVar3 = Dino_BusSand_View_GameView__BuildEscape_239e5a4(param_1,uStack_28,1);
    if (lVar1 != 0) {
      System_Collections_Generic_Dictionary_int__object___set_Item_3437318
                (lVar1,param_2,uVar3,*(undefined8 *)PTR_DAT_04cbc4a8);
      lVar1 = *(long *)(param_1 + 0x100);
      uVar3 = Dino_BusSand_View_GameView__BuildEscape_239e5a4(param_1,uStack_28,0);
      if (*(int *)(*(long *)PTR_DAT_04cb2870 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04cb2870);
      }
      Dino_BusSand_View_GameView__RouteLength_239ed68(uVar3);
      if (lVar1 != 0) {
        System_Collections_Generic_Dictionary_int__float___set_Item_343e2a4
                  (lVar1,param_2,*(undefined8 *)PTR_DAT_04cbb010);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

