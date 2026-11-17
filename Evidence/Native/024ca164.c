/* IL2CPP: Dino.BusSand.View.MechanicLayer$$SetPipe
void Dino_BusSand_View_MechanicLayer__SetPipe (Dino_BusSand_View_MechanicLayer_o* __this, UnityEngine_MeshRenderer_o* r, float fuel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.MechanicLayer$$SetPipe
   void Dino_BusSand_View_MechanicLayer__SetPipe (Dino_BusSand_View_MechanicLayer_o* __this,
   UnityEngine_MeshRenderer_o* r, float fuel, const MethodInfo* method); */

void Dino_BusSand_View_MechanicLayer__SetPipe_23ca164(undefined4 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c9e0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa0d8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caa130);
    bRam0000000004f9c9e0 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(param_3,0,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  plVar5 = (long *)(param_2 + 0xe8);
  if (*plVar5 == 0) {
    lVar3 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa0d8);
    UnityEngine_MaterialPropertyBlock___ctor_4372b28(lVar3,0);
    *plVar5 = lVar3;
    thunk_FUN_02134474(plVar5,lVar3);
  }
  if (param_3 != 0) {
    UnityEngine_Renderer__GetPropertyBlock_4373a20(param_3,*plVar5,0);
    if (*plVar5 != 0) {
      UnityEngine_MaterialPropertyBlock__SetFloat_4372e2c
                (param_1,*plVar5,*(undefined8 *)PTR_DAT_04caa130,0);
      lVar3 = *plVar5;
      if ((bRam0000000004fa68bf & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cf67a0,lVar3,0);
        bRam0000000004fa68bf = 1;
      }
      if (param_3 != 0) {
        lVar4 = *(long *)(param_3 + 0x10);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(param_3,0);
        }
        uVar6 = 0;
        if (lVar3 != 0) {
          uVar6 = *(undefined8 *)(lVar3 + 0x10);
        }
        if (pcRam0000000004fa6908 == (code *)0x0) {
          pcRam0000000004fa6908 = (code *)FUN_02132f40(&UNK_00e2f2e7);
        }
                    /* WARNING: Could not recover jumptable at 0x04473688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000004fa6908)(lVar4,uVar6);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

