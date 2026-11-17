/* IL2CPP: Dino.BusSand.View.PropKit.MeshBuilder$$.ctor
void Dino_BusSand_View_PropKit_MeshBuilder___ctor (Dino_BusSand_View_PropKit_MeshBuilder_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.PropKit.MeshBuilder$$.ctor
   void Dino_BusSand_View_PropKit_MeshBuilder___ctor (Dino_BusSand_View_PropKit_MeshBuilder_o*
   __this, const MethodInfo* method); */

undefined1  [16] Dino_BusSand_View_PropKit_MeshBuilder___ctor_23dce3c(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  
  puVar8 = PTR_DAT_04cbc390;
  puVar7 = PTR_DAT_04cbc380;
  puVar6 = PTR_DAT_04cb7270;
  puVar5 = PTR_DAT_04cb3c10;
  puVar4 = PTR_DAT_04cad6e8;
  puVar3 = PTR_DAT_04caa1d8;
  puVar2 = PTR_DAT_04caa1d0;
  puVar1 = PTR_DAT_04caa1c8;
  if ((bRam0000000004f9ca63 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad6e8);
    FUN_02132f7c(PTR_DAT_04cb7270);
    FUN_02132f7c(PTR_DAT_04cb3c10);
    FUN_02132f7c(PTR_DAT_04cbc380);
    FUN_02132f7c(PTR_DAT_04caa1c8);
    FUN_02132f7c(PTR_DAT_04cbc390);
    FUN_02132f7c(PTR_DAT_04caa1d0);
    FUN_02132f7c(PTR_DAT_04caa1d8);
    bRam0000000004f9ca63 = 1;
  }
  uVar9 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
                    /* try { // try from 024dcf18 to 025dcf1f has its CatchHandler @ 024dd6b0 */
  System_Collections_Generic_List_Vector3____ctor_3af944c(uVar9,*(undefined8 *)puVar5);
  *(undefined8 *)(param_1 + 0x10) = uVar9;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x10),uVar9);
  uVar9 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
                    /* try { // try from 024dcf3c to 025dcf3f has its CatchHandler @ 024dd6a0 */
                    /* try { // try from 024dcf40 to 025dcf4f has its CatchHandler @ 024dd6ac */
  System_Collections_Generic_List_Vector3____ctor_3af944c(uVar9,*(undefined8 *)puVar5);
  *(undefined8 *)(param_1 + 0x18) = uVar9;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar9);
  uVar9 = thunk_FUN_0216e89c(*(undefined8 *)puVar8);
                    /* try { // try from 024dcf5c to 025dcf83 has its CatchHandler @ 024dd6b4 */
  System_Collections_Generic_List_Color____ctor_3a01b34(uVar9,*(undefined8 *)puVar7);
  *(undefined8 *)(param_1 + 0x20) = uVar9;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x20),uVar9);
  uVar9 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
                    /* try { // try from 024dcf84 to 025dd697 has its CatchHandler @ 024dcc90 */
  System_Collections_Generic_List_Vector2____ctor_3af6bb0(uVar9,*(undefined8 *)puVar6);
  *(undefined8 *)(param_1 + 0x28) = uVar9;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x28),uVar9);
  uVar9 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Collections_Generic_List_int____ctor_3a2b7dc(uVar9,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x30) = uVar9;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x30),uVar9);
  auVar10._8_8_ = 0;
  auVar10._0_8_ = param_1;
  return auVar10;
}

