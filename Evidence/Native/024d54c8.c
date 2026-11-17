/* IL2CPP: Dino.BusSand.View.PropKit$$SetLook
void Dino_BusSand_View_PropKit__SetLook (UnityEngine_Renderer_o* r, UnityEngine_Color_o tint, UnityEngine_Color_o glow, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.PropKit$$SetLook
   void Dino_BusSand_View_PropKit__SetLook (UnityEngine_Renderer_o* r, UnityEngine_Color_o tint,
   UnityEngine_Color_o glow, const MethodInfo* method); */

void Dino_BusSand_View_PropKit__SetLook_23d54c8
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
               long param_9)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9ca4b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbd088);
    bRam0000000004f9ca4b = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(param_9,0,0);
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
                (param_1,param_2,param_3,param_4,lVar3,
                 *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xb8),0);
      lVar3 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xb0);
      if ((lVar3 != 0) &&
         (UnityEngine_MaterialPropertyBlock__SetColor_4372f04
                    (param_5,param_6,param_7,param_8,lVar3,
                     *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xbc),0), param_9 != 0)) {
        lVar3 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xb0);
        if ((bRam0000000004fa68bf & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cf67a0,lVar3,0);
          bRam0000000004fa68bf = 1;
        }
        if (param_9 != 0) {
          lVar4 = *(long *)(param_9 + 0x10);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(param_9,0);
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

