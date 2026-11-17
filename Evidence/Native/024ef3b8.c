/* IL2CPP: Dino.BusSand.View.SkidMarks$$.ctor
void Dino_BusSand_View_SkidMarks___ctor (Dino_BusSand_View_SkidMarks_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.SkidMarks$$.ctor
   void Dino_BusSand_View_SkidMarks___ctor (Dino_BusSand_View_SkidMarks_o* __this, const MethodInfo*
   method); */

undefined1  [16] Dino_BusSand_View_SkidMarks___ctor_23ef3b8(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  
  puVar9 = PTR_DAT_04cbdd78;
  puVar8 = PTR_DAT_04cbdd70;
  puVar7 = PTR_DAT_04cbdd68;
  puVar6 = PTR_DAT_04cbdd60;
  puVar5 = PTR_DAT_04cbdd58;
  puVar4 = PTR_DAT_04cbc390;
  puVar3 = PTR_DAT_04caa1d8;
  puVar2 = PTR_DAT_04caa1d0;
  puVar1 = PTR_DAT_04caa198;
  if ((bRam0000000004f9cab0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbdd70);
    FUN_02132f7c(PTR_DAT_04cbdd68);
                    /* try { // try from 024ef448 to 025ef547 has its CatchHandler @ 024ef448
                       catch() { ... } // from try @ 024ef448 with catch @ 024ef448
                       catch() { ... } // from try @ 024ef628 with catch @ 024ef448
                       catch() { ... } // from try @ 024ef6d4 with catch @ 024ef448
                       catch() { ... } // from try @ 024ef728 with catch @ 024ef448 */
    FUN_02132f7c(PTR_DAT_04caa180);
    FUN_02132f7c(PTR_DAT_04caa188);
    FUN_02132f7c(PTR_DAT_04caa198);
    FUN_02132f7c(PTR_DAT_04cbdd60);
    FUN_02132f7c(PTR_DAT_04cbdd78);
    FUN_02132f7c(PTR_DAT_04caa1c8);
    FUN_02132f7c(PTR_DAT_04cbc390);
    FUN_02132f7c(PTR_DAT_04caa1d0);
    FUN_02132f7c(PTR_DAT_04caa1d8);
    FUN_02132f7c(PTR_DAT_04cbdd58);
    bRam0000000004f9cab0 = 1;
  }
  uVar10 = thunk_FUN_0216e89c(*(undefined8 *)puVar5);
  System_Collections_Generic_List_SkidMarks_Seg____ctor_2a9a348(uVar10,0x200,*(undefined8 *)puVar6);
  *(undefined8 *)(param_1 + 0x20) = uVar10;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x20),uVar10);
  uVar10 = thunk_FUN_0216e89c(*(undefined8 *)puVar7);
  System_Collections_Generic_Dictionary_int__ValueTuple_Vector3__Vector3__float_____ctor_34102f4
            (uVar10,*(undefined8 *)puVar8);
  *(undefined8 *)(param_1 + 0x28) = uVar10;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x28),uVar10);
  uVar10 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Collections_Generic_List_Vector3____ctor_3af94c4(uVar10,0xaf0,*(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 0x30) = uVar10;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x30),uVar10);
  uVar10 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
                    /* try { // try from 024ef548 to 025ef56f has its CatchHandler @ 024ef6f4 */
  System_Collections_Generic_List_Color____ctor_3a01bac(uVar10,0xaf0,*(undefined8 *)puVar9);
  *(undefined8 *)(param_1 + 0x38) = uVar10;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x38),uVar10);
  uVar10 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Collections_Generic_List_Vector2____ctor_3af6c28
            (uVar10,0xaf0,*(undefined8 *)PTR_DAT_04caa180);
  *(undefined8 *)(param_1 + 0x40) = uVar10;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x40),uVar10);
  uVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa1c8);
                    /* try { // try from 024ef5ac to 025ef5d7 has its CatchHandler @ 024ef6f0 */
  System_Collections_Generic_List_int____ctor_3a2b854(uVar10,0x1068,*(undefined8 *)PTR_DAT_04caa188)
  ;
  *(undefined8 *)(param_1 + 0x48) = uVar10;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x48),uVar10);
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004fa830a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8,0);
    bRam0000000004fa830a = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  auVar11._8_8_ = 0;
  auVar11._0_8_ = param_1;
  return auVar11;
}

