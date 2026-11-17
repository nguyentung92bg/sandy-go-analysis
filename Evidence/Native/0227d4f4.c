/* IL2CPP: Dino.BusSand.App.UI.UIParticleSorting$$PrepareAll
void Dino_BusSand_App_UI_UIParticleSorting__PrepareAll (UnityEngine_GameObject_o* root, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UIParticleSorting$$PrepareAll
   void Dino_BusSand_App_UI_UIParticleSorting__PrepareAll (UnityEngine_GameObject_o* root, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_UIParticleSorting__PrepareAll_217d4f4(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9b90e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad3b8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cab188);
    bRam0000000004f9b90e = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(param_1,0,0);
  if ((uVar2 & 1) == 0) {
    if ((param_1 == 0) ||
       (lVar3 = UnityEngine_GameObject__GetComponentsInChildren_object__275b130
                          (param_1,1,*(undefined8 *)PTR_DAT_04cad3b8), puVar1 = PTR_DAT_04cab188,
       lVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
      uVar2 = 0;
      uVar4 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
      do {
        if (uVar4 <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        uVar5 = *(undefined8 *)(lVar3 + 0x20 + uVar2 * 8);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_UI_UIParticleSorting__Prepare_217d5f8(uVar5);
        uVar4 = (ulong)*(uint *)(lVar3 + 0x18);
        uVar2 = uVar2 + 1;
      } while ((long)uVar2 < (long)(int)*(uint *)(lVar3 + 0x18));
    }
  }
  return;
}

