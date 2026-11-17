/* IL2CPP: Dino.BusSand.View.PropKit$$get_Material
UnityEngine_Material_o* Dino_BusSand_View_PropKit__get_Material (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.PropKit$$get_Material
   UnityEngine_Material_o* Dino_BusSand_View_PropKit__get_Material (const MethodInfo* method); */

undefined8 Dino_BusSand_View_PropKit__get_Material_23dcae0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  
  puVar2 = PTR_DAT_04cbd088;
  if ((bRam0000000004f9ca48 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab208);
    FUN_02132f7c(PTR_DAT_04cab588);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbd088);
    FUN_02132f7c(PTR_DAT_04cbd8b8);
    FUN_02132f7c(PTR_DAT_04cbd8c0);
    FUN_02132f7c(PTR_DAT_04cbd8c8);
    bRam0000000004f9ca48 = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
  lVar8 = *(long *)puVar1;
  uVar9 = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0xa0);
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar8);
  }
  uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar9,0,0);
  puVar3 = PTR_DAT_04cbd8b8;
  if ((uVar5 & 1) != 0) {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
LAB_024dccac:
    return *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xa0);
  }
  if (*(int *)(*(long *)PTR_DAT_04cab208 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar9 = Dino_BusSand_GameAssets__FindShader_237d610(*(undefined8 *)puVar3,0);
                    /* try { // try from 024dcbe4 to 025dcbe7 has its CatchHandler @ 024dcbe8 */
  lVar4 = *(long *)puVar1;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024dcbe4 with catch @ 024dcbe8
                       try { // try from 024dcbe8 to 025dcc07 has its CatchHandler @ 024dbe80 */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024dc3b0 with catch @ 024dcbec
                        */
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar4);
  }
  puVar1 = PTR_DAT_04cab588;
                    /* try { // try from 024dcc08 to 025dcc0b has its CatchHandler @ 024dcc2c */
                    /* try { // try from 024dcc0c to 025dcc2f has its CatchHandler @ 024dbe80 */
  uVar5 = UnityEngine_Object__op_Equality_43c6f30(uVar9,0,0);
  if ((uVar5 & 1) != 0) {
    uVar9 = UnityEngine_Shader__Find_43750d0(*(undefined8 *)PTR_DAT_04cbd8c0,0);
                    /* catch() { ... } // from try @ 024dcc08 with catch @ 024dcc2c */
  }
                    /* try { // try from 024dcc30 to 025dcc37 has its CatchHandler @ 024dcc40 */
  uVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
                    /* try { // try from 024dcc38 to 025dcc43 has its CatchHandler @ 024dbe80 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 024dcc30 with catch @ 024dcc40
                        */
  UnityEngine_Material___ctor_437b5a8(uVar6,uVar9,0);
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
  puVar7 = (undefined8 *)(*(long *)(lVar4 + 0xb8) + 0xa0);
  *puVar7 = uVar6;
  thunk_FUN_02134474(puVar7,uVar6);
  lVar4 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xa0);
  if (lVar4 != 0) {
    UnityEngine_Object__set_name_43c72ec(lVar4,*(undefined8 *)PTR_DAT_04cbd8c8,0);
                    /* try { // try from 024dcc90 to 025dcf17 has its CatchHandler @ 024dcc90
                       catch() { ... } // from try @ 024dcc90 with catch @ 024dcc90
                       catch() { ... } // from try @ 024dcf84 with catch @ 024dcc90
                       catch() { ... } // from try @ 024dd6a0 with catch @ 024dcc90
                       catch() { ... } // from try @ 024dd6d4 with catch @ 024dcc90
                       catch() { ... } // from try @ 024dd6f8 with catch @ 024dcc90 */
    lVar4 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xa0);
    if (lVar4 != 0) {
      UnityEngine_Material__set_enableInstancing_437dbe4(lVar4,1,0);
      goto LAB_024dccac;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

