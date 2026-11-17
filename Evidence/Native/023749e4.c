/* IL2CPP: Dino.BusSand.App.Meta.StoreReview$$Request
void Dino_BusSand_App_Meta_StoreReview__Request (System_Action_o* done, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.StoreReview$$Request
   void Dino_BusSand_App_Meta_StoreReview__Request (System_Action_o* done, const MethodInfo*
   method); */

void Dino_BusSand_App_Meta_StoreReview__Request_22749e4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_04cb4818;
  if ((bRam0000000004f9c113 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac420);
    FUN_02132f7c(PTR_DAT_04cb4820);
    FUN_02132f7c(PTR_DAT_04cb4828);
    FUN_02132f7c(PTR_DAT_04cb4818);
    bRam0000000004f9c113 = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar2,0);
  puVar1 = PTR_DAT_04cb4820;
  if (lVar2 != 0) {
    plVar4 = (long *)(lVar2 + 0x10);
    *plVar4 = param_1;
    thunk_FUN_02134474(plVar4,param_1);
    lVar5 = **(long **)(*(long *)puVar1 + 0xb8);
    if (lVar5 == 0) {
      Dino_BusSand_App_Meta_StoreReview__OpenStorePage_2274b9c();
      lVar2 = *plVar4;
      if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02374b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
        return;
      }
    }
    else {
      uVar3 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac420);
      System_Action_bool____ctor_35ee0e8(uVar3,lVar2,*(undefined8 *)PTR_DAT_04cb4828,0);
      (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),uVar3,*(undefined8 *)(lVar5 + 0x28))
      ;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

