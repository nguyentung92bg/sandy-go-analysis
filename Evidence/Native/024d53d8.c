/* IL2CPP: Dino.BusSand.View.MechanicLayer.<>c__DisplayClass132_0$$<Flash>b__0
void Dino_BusSand_View_MechanicLayer___c__DisplayClass132_0___Flash_b__0 (Dino_BusSand_View_MechanicLayer___c__DisplayClass132_0_o* __this, float k, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.MechanicLayer.<>c__DisplayClass132_0$$<Flash>b__0
   void Dino_BusSand_View_MechanicLayer___c__DisplayClass132_0___Flash_b__0
   (Dino_BusSand_View_MechanicLayer___c__DisplayClass132_0_o* __this, float k, const MethodInfo*
   method); */

void Dino_BusSand_View_MechanicLayer___c__DisplayClass132_0___Flash_b__0_23d53d8
               (float param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9ca1e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbd088);
    bRam0000000004f9ca1e = 1;
  }
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  uVar8 = *(undefined4 *)(param_2 + 0x20);
  fVar7 = *(float *)(param_2 + 0x24);
  uVar9 = *(undefined4 *)(param_2 + 0x18);
  uVar10 = *(undefined4 *)(param_2 + 0x1c);
  lVar6 = *(long *)(param_2 + 0x10);
  if (*(int *)(*(long *)PTR_DAT_04cbd088 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9ca4b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbd088);
    bRam0000000004f9ca4b = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(lVar6,0,0);
  puVar1 = PTR_DAT_04cbd088;
  if ((uVar2 & 1) != 0) {
    return;
  }
  lVar3 = *(long *)PTR_DAT_04cbd088;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar1;
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0xb0);
  if (lVar3 != 0) {
    UnityEngine_MaterialPropertyBlock__Clear_43729a8(lVar3,0);
    lVar3 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xb0);
    if (lVar3 != 0) {
      UnityEngine_MaterialPropertyBlock__SetColor_4372f04
                (0x3f800000,0x3f800000,0x3f800000,0x3f800000,lVar3,
                 *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xb8),0);
      lVar3 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xb0);
      if ((lVar3 != 0) &&
         (UnityEngine_MaterialPropertyBlock__SetColor_4372f04
                    (uVar9,uVar10,uVar8,(1.0 - param_1) * fVar7,lVar3,
                     *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xbc),0), lVar6 != 0)) {
        lVar3 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xb0);
        if ((bRam0000000004fa68bf & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cf67a0,lVar3,0);
          bRam0000000004fa68bf = 1;
        }
        if (lVar6 != 0) {
          lVar4 = *(long *)(lVar6 + 0x10);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar6,0);
          }
          uVar5 = 0;
          if (lVar3 != 0) {
            uVar5 = *(undefined8 *)(lVar3 + 0x10);
          }
          if (pcRam0000000004fa6908 == (code *)0x0) {
            pcRam0000000004fa6908 = (code *)FUN_02132f40(&UNK_00e2f2e7);
          }
                    /* WARNING: Could not recover jumptable at 0x04473688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000004fa6908)(lVar4,uVar5);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

