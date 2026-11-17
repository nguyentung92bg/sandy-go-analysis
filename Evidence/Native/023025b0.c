/* IL2CPP: Dino.BusSand.App.Meta.BoosterIntro$$get_Order
System_Int32_array* Dino_BusSand_App_Meta_BoosterIntro__get_Order (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BoosterIntro$$get_Order
   System_Int32_array* Dino_BusSand_App_Meta_BoosterIntro__get_Order (const MethodInfo* method); */

long Dino_BusSand_App_Meta_BoosterIntro__get_Order_22025b0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_DAT_04cb1c70;
  if ((bRam0000000004f9bcb1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1c78);
    FUN_02132f7c(PTR_DAT_04cb1c70);
    FUN_02132f7c(PTR_DAT_04cb1c80);
    FUN_02132f7c(PTR_DAT_04caec70);
    FUN_02132f7c(PTR_DAT_04cb1c88);
    FUN_02132f7c(PTR_DAT_04cb1c90);
    bRam0000000004f9bcb1 = 1;
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar1;
  }
  if (**(long **)(lVar3 + 0xb8) != 0) {
    lVar3 = System_Array__Clone_485257c(**(long **)(lVar3 + 0xb8),0);
    if (lVar3 == 0) {
      lVar4 = 0;
    }
    else {
      uVar8 = *(undefined8 *)PTR_DAT_04caec70;
      lVar4 = thunk_FUN_0216e7a0(lVar3,uVar8);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021335a4(lVar3,uVar8);
      }
    }
    puVar1 = PTR_DAT_04cb1c90;
    lVar3 = *(long *)PTR_DAT_04cb1c90;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar1;
    }
    puVar2 = PTR_DAT_04cb1c78;
    puVar6 = *(undefined8 **)(lVar3 + 0xb8);
    lVar7 = puVar6[1];
    if (lVar7 == 0) {
                    /* try { // try from 023026ac to 024026bf has its CatchHandler @ 023026d8 */
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        puVar6 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
      }
                    /* try { // try from 023026c0 to 024026ef has its CatchHandler @ 023025a0 */
      uVar8 = *puVar6;
      lVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb1c80);
                    /* catch() { ... } // from try @ 023026ac with catch @ 023026d8 */
      System_Comparison_int____ctor_3325d5c(lVar7,uVar8,*(undefined8 *)PTR_DAT_04cb1c88,0);
                    /* try { // try from 023026f0 to 024027ef has its CatchHandler @ 023026f0
                       catch() { ... } // from try @ 023026f0 with catch @ 023026f0
                       catch() { ... } // from try @ 02302804 with catch @ 023026f0 */
      plVar5 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
      *plVar5 = lVar7;
      thunk_FUN_02134474(plVar5,lVar7);
    }
    System_Array__Sort_int__26880ec(lVar4,lVar7,*(undefined8 *)puVar2);
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

