/* IL2CPP: Dino.BusSand.View.Fx$$Mat
UnityEngine_Material_o* Dino_BusSand_View_Fx__Mat (Dino_BusSand_View_Fx_o* __this, System_String_o* tex, bool additive, int32_t queue, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.Fx$$Mat
   UnityEngine_Material_o* Dino_BusSand_View_Fx__Mat (Dino_BusSand_View_Fx_o* __this,
   System_String_o* tex, bool additive, int32_t queue, const MethodInfo* method); */

long Dino_BusSand_View_Fx__Mat_2397f38(long param_1,long param_2,ulong param_3,int param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined4 uVar12;
  
  puVar2 = PTR_DAT_04cab208;
  if ((bRam0000000004f9c8e9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab208);
    FUN_02132f7c(PTR_DAT_04cab638);
    FUN_02132f7c(PTR_DAT_04cab588);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbc200);
    FUN_02132f7c(PTR_DAT_04cbc208);
    FUN_02132f7c(PTR_DAT_04cb7298);
    FUN_02132f7c(PTR_DAT_04cb72a0);
    FUN_02132f7c(PTR_DAT_04cb72b0);
    FUN_02132f7c(PTR_DAT_04cb72c0);
    FUN_02132f7c(PTR_DAT_04cbc210);
                    /* try { // try from 02497ff0 to 0259809f has its CatchHandler @ 02497ff0
                       catch() { ... } // from try @ 02497ff0 with catch @ 02497ff0
                       catch() { ... } // from try @ 024980a8 with catch @ 02497ff0
                       catch() { ... } // from try @ 02498120 with catch @ 02497ff0
                       catch() { ... } // from try @ 024981c8 with catch @ 02497ff0
                       catch() { ... } // from try @ 024981f4 with catch @ 02497ff0
                       catch() { ... } // from try @ 02498218 with catch @ 02497ff0
                       catch() { ... } // from try @ 02498244 with catch @ 02497ff0 */
    FUN_02132f7c(PTR_DAT_04cbc218);
    bRam0000000004f9c8e9 = 1;
  }
  puVar4 = PTR_DAT_04cb7298;
  puVar3 = PTR_DAT_04cab588;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = Dino_BusSand_GameAssets__FindShader_237d610(*(undefined8 *)puVar4,0);
  lVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  UnityEngine_Material___ctor_437b5a8(lVar6,uVar5,0);
  lVar7 = *(long *)(param_1 + 0x60);
  if (lVar7 != 0) {
    lVar9 = *(long *)(lVar7 + 0x10);
    lVar11 = *(long *)PTR_DAT_04cab638;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar9 != 0) {
      uVar1 = *(uint *)(lVar7 + 0x18);
      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
        plVar10 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
        *plVar10 = lVar6;
                    /* try { // try from 024980a0 to 025980a7 has its CatchHandler @ 024981f8 */
        thunk_FUN_02134474(plVar10,lVar6);
      }
      else {
                    /* try { // try from 024980a8 to 02598117 has its CatchHandler @ 02497ff0 */
        System_Collections_Generic_List_object___AddWithResize_3a81bf4
                  (lVar7,lVar6,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
      }
      if (param_2 != 0) {
        uVar8 = System_String__StartsWith_46d117c(param_2,*(undefined8 *)PTR_DAT_04cbc208,0);
        if ((uVar8 & 1) == 0) {
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
                    /* try { // try from 02498118 to 0259811f has its CatchHandler @ 024981a8 */
          lVar7 = Dino_BusSand_GameAssets__get_Instance_2374c6c(0);
                    /* try { // try from 02498120 to 025981c3 has its CatchHandler @ 02497ff0 */
          if (lVar7 == 0) goto LAB_0249821c;
          uVar5 = Dino_BusSand_GameAssets__GetTexture_237ceb8(lVar7,param_2,0);
        }
        else {
          uVar5 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cbc218,param_2,0);
          uVar5 = UnityEngine_Resources__Load_object__2891e2c(uVar5,*(undefined8 *)PTR_DAT_04cbc200)
          ;
        }
        if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar8 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
        if ((uVar8 & 1) == 0) {
          if (lVar6 == 0) goto LAB_0249821c;
        }
        else {
          if (lVar6 == 0) goto LAB_0249821c;
          UnityEngine_Material__SetTexture_43831cc(lVar6,*(undefined8 *)PTR_DAT_04cb72b0,uVar5,0);
        }
        puVar3 = PTR_DAT_04cbc210;
        puVar2 = PTR_DAT_04cb72c0;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02498118 with catch @ 024981a8
                        */
        UnityEngine_Material__SetFloat_4383048(0x40a00000,lVar6,*(undefined8 *)PTR_DAT_04cb72a0,0);
                    /* try { // try from 024981c4 to 025981c7 has its CatchHandler @ 024981e8 */
                    /* try { // try from 024981c8 to 025981eb has its CatchHandler @ 02497ff0 */
        uVar12 = 0x3f800000;
        if ((param_3 & 1) == 0) {
          uVar12 = 0x41200000;
        }
        UnityEngine_Material__SetFloat_4383048(uVar12,lVar6,*(undefined8 *)puVar2,0);
        UnityEngine_Material__set_renderQueue_437c9d8(lVar6,param_4 + 0xc1c,0);
                    /* catch() { ... } // from try @ 024981c4 with catch @ 024981e8 */
                    /* try { // try from 024981ec to 025981f3 has its CatchHandler @ 0249824c */
        uVar5 = System_String__Concat_46c82e0(*(undefined8 *)puVar3,param_2,0);
                    /* try { // try from 024981f4 to 02598213 has its CatchHandler @ 02497ff0 */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024980a0 with catch @ 024981f8
                        */
        UnityEngine_Object__set_name_43c72ec(lVar6,uVar5,0);
                    /* try { // try from 02498214 to 02598217 has its CatchHandler @ 02498238 */
                    /* try { // try from 02498218 to 0259823b has its CatchHandler @ 02497ff0 */
        return lVar6;
      }
    }
  }
LAB_0249821c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

