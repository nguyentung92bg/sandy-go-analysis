/* IL2CPP: Dino.BusSand.View.PackVehicle$$SetSand
void Dino_BusSand_View_PackVehicle__SetSand (Dino_BusSand_View_PackVehicle_o* __this, float fill, UnityEngine_Color_o main, UnityEngine_Color_o shadow, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.PackVehicle$$SetSand
   void Dino_BusSand_View_PackVehicle__SetSand (Dino_BusSand_View_PackVehicle_o* __this, float fill,
   UnityEngine_Color_o main, UnityEngine_Color_o shadow, const MethodInfo* method); */

void Dino_BusSand_View_PackVehicle__SetSand_23d7ebc
               (float param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,long param_6)

{
  undefined4 uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  uint uVar11;
  undefined8 uVar12;
  long *plVar13;
  float fVar14;
  float fVar15;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
                    /* try { // try from 024d7ef0 to 025d7ef3 has its CatchHandler @ 024d7f00 */
                    /* try { // try from 024d7ef4 to 025d7ef7 has its CatchHandler @ 024d7efc */
                    /* try { // try from 024d7ef8 to 025d7f23 has its CatchHandler @ 024d7a2c */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024d7ef4 with catch @ 024d7efc
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024d7ef0 with catch @ 024d7f00
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024d7d20 with catch @ 024d7f04
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024d7dec with catch @ 024d7f08
                        */
  if ((bRam0000000004f9ca2f & 1) == 0) {
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024d7cf8 with catch @ 024d7f0c
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024d7cdc with catch @ 024d7f10
                        */
    FUN_02132f7c(PTR_DAT_04caa0d8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
                    /* try { // try from 024d7f24 to 025d7f27 has its CatchHandler @ 024d7f40 */
                    /* try { // try from 024d7f28 to 025d7f43 has its CatchHandler @ 024d7a2c */
    FUN_02132f7c(PTR_DAT_04caa100);
    FUN_02132f7c(PTR_DAT_04caa108);
                    /* catch() { ... } // from try @ 024d7f24 with catch @ 024d7f40 */
                    /* try { // try from 024d7f44 to 025d7f4b has its CatchHandler @ 024d7f54 */
    FUN_02132f7c(PTR_DAT_04caa118);
                    /* try { // try from 024d7f4c to 025d7f57 has its CatchHandler @ 024d7a2c */
    FUN_02132f7c(PTR_DAT_04caa120);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 024d7f44 with catch @ 024d7f54
                        */
    bRam0000000004f9ca2f = 1;
  }
  puVar4 = PTR_DAT_04caa118;
  puVar3 = PTR_DAT_04ca9ae8;
  if (param_1 <= _UNK_00e207ec) {
    lVar7 = *(long *)(param_6 + 0x58);
LAB_024d7fcc:
    uVar12 = *(undefined8 *)puVar4;
    uVar9 = 0;
    uVar11 = 0;
    bVar2 = true;
  }
  else {
    uVar12 = *(undefined8 *)(param_6 + 0x38);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar12,0,0);
    lVar7 = *(long *)(param_6 + 0x58);
    if ((uVar6 & 1) == 0) goto LAB_024d7fcc;
    uVar9 = *(undefined8 *)puVar4;
    uVar12 = 0;
    bVar2 = false;
    uVar11 = 1;
  }
  if (lVar7 != 0) {
    if (!bVar2) {
      uVar12 = uVar9;
    }
    uVar1 = 0x3f800000;
    if (!bVar2) {
      uVar1 = 0;
    }
    UnityEngine_MaterialPropertyBlock__SetFloat_4372e2c(uVar1,lVar7,uVar12,0);
    uVar12 = *(undefined8 *)(param_6 + 0x30);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar12,0,0);
    if ((uVar6 & 1) != 0) {
      if (*(long *)(param_6 + 0x30) == 0) goto LAB_024d81c8;
      UnityEngine_Renderer__SetPropertyBlock_4373a18
                (*(long *)(param_6 + 0x30),*(undefined8 *)(param_6 + 0x58),0);
    }
    uVar12 = *(undefined8 *)(param_6 + 0x40);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar12,0,0);
    if ((uVar6 & 1) != 0) {
      if ((*(long *)(param_6 + 0x40) == 0) ||
         (lVar7 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_6 + 0x40),0),
         lVar7 == 0)) goto LAB_024d81c8;
      uVar5 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar7,0);
      if (uVar11 != (uVar5 & 1)) {
        if ((*(long *)(param_6 + 0x40) == 0) ||
           (lVar7 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_6 + 0x40),0),
           lVar7 == 0)) goto LAB_024d81c8;
        UnityEngine_GameObject__SetActive_43c1408(lVar7,uVar11,0);
      }
    }
    if (uVar11 == 0) {
      return;
    }
    plVar13 = (long *)(param_6 + 0xa0);
    lVar7 = *plVar13;
    if (lVar7 == 0) {
      lVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa0d8);
      UnityEngine_MaterialPropertyBlock___ctor_4372b28(lVar7,0);
      *plVar13 = lVar7;
      thunk_FUN_02134474(plVar13,lVar7);
      lVar7 = *plVar13;
      if (lVar7 == 0) goto LAB_024d81c8;
    }
    UnityEngine_MaterialPropertyBlock__SetColor_4372eb4
              (param_2,param_3,param_4,param_5,lVar7,*(undefined8 *)PTR_DAT_04caa100,0);
    if (*plVar13 != 0) {
      UnityEngine_MaterialPropertyBlock__SetColor_4372eb4
                (uStack0000000000000000,uStack0000000000000004,uStack0000000000000008,
                 uStack000000000000000c,*plVar13,*(undefined8 *)PTR_DAT_04caa108,0);
      if (*plVar13 != 0) {
        fVar14 = 1.0;
        if (param_1 <= 1.0) {
          fVar14 = param_1;
        }
        fVar15 = 0.0;
        if (0.0 <= param_1) {
          fVar15 = fVar14;
        }
        UnityEngine_MaterialPropertyBlock__SetFloat_4372e2c
                  (fVar15,*plVar13,*(undefined8 *)PTR_DAT_04caa120,0);
        lVar7 = *(long *)(param_6 + 0x38);
        if (lVar7 != 0) {
          lVar8 = *plVar13;
          if ((bRam0000000004fa68bf & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cf67a0,lVar8,0);
            bRam0000000004fa68bf = 1;
          }
          if (lVar7 != 0) {
            lVar10 = *(long *)(lVar7 + 0x10);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar7,0);
            }
            uVar12 = 0;
            if (lVar8 != 0) {
              uVar12 = *(undefined8 *)(lVar8 + 0x10);
            }
            if (pcRam0000000004fa6908 == (code *)0x0) {
              pcRam0000000004fa6908 = (code *)FUN_02132f40(&UNK_00e2f2e7);
            }
                    /* WARNING: Could not recover jumptable at 0x04473688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000004fa6908)(lVar10,uVar12);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
      }
    }
  }
LAB_024d81c8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

