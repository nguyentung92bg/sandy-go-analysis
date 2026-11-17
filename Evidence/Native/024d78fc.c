/* IL2CPP: Dino.BusSand.View.PackVehicle$$SetLook
void Dino_BusSand_View_PackVehicle__SetLook (Dino_BusSand_View_PackVehicle_o* __this, uint8_t color, bool roofOff, float fill, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.PackVehicle$$SetLook
   void Dino_BusSand_View_PackVehicle__SetLook (Dino_BusSand_View_PackVehicle_o* __this, uint8_t
   color, bool roofOff, float fill, const MethodInfo* method); */

void Dino_BusSand_View_PackVehicle__SetLook_23d78fc
               (float param_1,long param_2,undefined4 param_3,ulong param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024d78ac with catch @ 024d791c
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024d789c with catch @ 024d7920
                        */
  if ((bRam0000000004f9ca2d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
                    /* try { // try from 024d793c to 025d793f has its CatchHandler @ 024d7958 */
    FUN_02132f7c(PTR_DAT_04cb70d8);
                    /* try { // try from 024d7940 to 025d795b has its CatchHandler @ 024d77b8 */
    FUN_02132f7c(PTR_DAT_04caa100);
    FUN_02132f7c(PTR_DAT_04caa110);
                    /* catch() { ... } // from try @ 024d793c with catch @ 024d7958 */
                    /* try { // try from 024d795c to 025d7963 has its CatchHandler @ 024d796c */
    FUN_02132f7c(PTR_DAT_04caa108);
                    /* try { // try from 024d7964 to 025d796f has its CatchHandler @ 024d77b8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 024d795c with catch @ 024d796c
                        */
    FUN_02132f7c(PTR_DAT_04caa118);
    FUN_02132f7c(PTR_DAT_04caa120);
    bRam0000000004f9ca2d = 1;
  }
  puVar2 = PTR_DAT_04cb70d8;
  if (*(long *)(param_2 + 0x58) != 0) {
    UnityEngine_MaterialPropertyBlock__Clear_43729a8(*(long *)(param_2 + 0x58),0);
    lVar8 = *(long *)(param_2 + 0x58);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_View_PackPalette__Main_2390528(param_3,0);
    if (lVar8 != 0) {
      UnityEngine_MaterialPropertyBlock__SetColor_4372eb4(lVar8,*(undefined8 *)PTR_DAT_04caa100,0);
      lVar8 = *(long *)(param_2 + 0x58);
      Dino_BusSand_View_PackPalette__Shadow_2390624(param_3,0);
      if (lVar8 != 0) {
        UnityEngine_MaterialPropertyBlock__SetColor_4372eb4(lVar8,*(undefined8 *)PTR_DAT_04caa108,0)
        ;
        if (*(long *)(param_2 + 0x58) != 0) {
          uVar1 = 0;
          if ((param_4 & 1) == 0) {
            uVar1 = 0x3f800000;
          }
                    /* try { // try from 024d7a2c to 025d7cdb has its CatchHandler @ 024d7a2c
                       catch() { ... } // from try @ 024d7a2c with catch @ 024d7a2c
                       catch() { ... } // from try @ 024d7d28 with catch @ 024d7a2c
                       catch() { ... } // from try @ 024d7df8 with catch @ 024d7a2c
                       catch() { ... } // from try @ 024d7ef8 with catch @ 024d7a2c
                       catch() { ... } // from try @ 024d7f28 with catch @ 024d7a2c
                       catch() { ... } // from try @ 024d7f4c with catch @ 024d7a2c */
          UnityEngine_MaterialPropertyBlock__SetFloat_4372e2c
                    (uVar1,*(long *)(param_2 + 0x58),*(undefined8 *)PTR_DAT_04caa118,0);
          puVar2 = PTR_DAT_04ca9ae8;
          if (*(long *)(param_2 + 0x58) != 0) {
            UnityEngine_MaterialPropertyBlock__SetFloat_4372e2c
                      (0,*(long *)(param_2 + 0x58),*(undefined8 *)PTR_DAT_04caa110,0);
            uVar7 = *(undefined8 *)(param_2 + 0x30);
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
            if ((uVar4 & 1) != 0) {
              if (*(long *)(param_2 + 0x30) == 0) goto LAB_024d7b8c;
              UnityEngine_Renderer__SetPropertyBlock_4373a18
                        (*(long *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x58),0);
            }
            uVar3 = 0;
            if ((_UNK_00e207ec < param_1) && ((param_4 & 1) != 0)) {
              uVar7 = *(undefined8 *)(param_2 + 0x38);
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
            }
            uVar7 = *(undefined8 *)(param_2 + 0x40);
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
            if ((uVar4 & 1) != 0) {
              if ((*(long *)(param_2 + 0x40) == 0) ||
                 (lVar8 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_2 + 0x40),0)
                 , lVar8 == 0)) goto LAB_024d7b8c;
              UnityEngine_GameObject__SetActive_43c1408(lVar8,uVar3 & 1,0);
            }
            if ((uVar3 & 1) == 0) {
              return;
            }
            if (*(long *)(param_2 + 0x58) != 0) {
              fVar9 = 1.0;
              if (param_1 <= 1.0) {
                fVar9 = param_1;
              }
              fVar10 = 0.0;
              if (0.0 <= param_1) {
                fVar10 = fVar9;
              }
              UnityEngine_MaterialPropertyBlock__SetFloat_4372e2c
                        (fVar10,*(long *)(param_2 + 0x58),*(undefined8 *)PTR_DAT_04caa120,0);
              lVar8 = *(long *)(param_2 + 0x38);
              if (lVar8 != 0) {
                lVar5 = *(long *)(param_2 + 0x58);
                if ((bRam0000000004fa68bf & 1) == 0) {
                  FUN_02132f7c(PTR_DAT_04cf67a0,lVar5,0);
                  bRam0000000004fa68bf = 1;
                }
                if (lVar8 != 0) {
                  lVar6 = *(long *)(lVar8 + 0x10);
                  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                    UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar8,0);
                  }
                  uVar7 = 0;
                  if (lVar5 != 0) {
                    uVar7 = *(undefined8 *)(lVar5 + 0x10);
                  }
                  if (pcRam0000000004fa6908 == (code *)0x0) {
                    pcRam0000000004fa6908 = (code *)FUN_02132f40(&UNK_00e2f2e7);
                  }
                    /* WARNING: Could not recover jumptable at 0x04473688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*pcRam0000000004fa6908)(lVar6,uVar7);
                  return;
                }
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
            }
          }
        }
      }
    }
  }
LAB_024d7b8c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

