/* IL2CPP: Dino.BusSand.App.Iap$$remove_Purchased
void Dino_BusSand_App_Iap__remove_Purchased (System_Action_int__o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Iap$$remove_Purchased
   void Dino_BusSand_App_Iap__remove_Purchased (System_Action_int__o* value, const MethodInfo*
   method); */

void Dino_BusSand_App_Iap__remove_Purchased_2179f44(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar2 = PTR_DAT_04cad1f0;
                    /* catch() { ... } // from try @ 02279f20 with catch @ 02279f48 */
  if ((bRam0000000004f9b8fb & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac7e0);
    FUN_02132f7c(PTR_DAT_04cad1f0);
    bRam0000000004f9b8fb = 1;
  }
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
  puVar1 = PTR_DAT_04cac7e0;
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
  do {
    lVar5 = System_Delegate__Remove_4872510(lVar4,param_1,0);
    if (lVar5 == 0) {
      lVar6 = 0;
    }
    else {
      uVar7 = *(undefined8 *)puVar1;
      lVar6 = thunk_FUN_0216e7a0(lVar5,uVar7);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021335a4(lVar5,uVar7);
      }
    }
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar5 = *(long *)puVar2;
    }
    lVar5 = FUN_0216aff4(*(long *)(lVar5 + 0xb8) + 0x10,lVar6,lVar4);
    bVar3 = lVar5 != lVar4;
    lVar4 = lVar5;
  } while (bVar3);
  return;
}

