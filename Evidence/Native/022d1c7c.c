/* IL2CPP: Dino.BusSand.App.UI.PassportGetPanel$$SetFmt
void Dino_BusSand_App_UI_PassportGetPanel__SetFmt (UnityEngine_Transform_o* node, System_String_o* fmt, System_String_o* arg, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PassportGetPanel$$SetFmt
   void Dino_BusSand_App_UI_PassportGetPanel__SetFmt (UnityEngine_Transform_o* node,
   System_String_o* fmt, System_String_o* arg, const MethodInfo* method); */

void Dino_BusSand_App_UI_PassportGetPanel__SetFmt_21d1c7c
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar2 = PTR_DAT_04ca9ae8;
                    /* try { // try from 022d1c94 to 023d1e7f has its CatchHandler @ 022d1e98 */
  if ((bRam0000000004f9bb40 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caec68);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9bb40 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Equality_43c6f30(param_1,0,0);
  if ((uVar5 & 1) != 0) {
    return;
  }
  uVar6 = System_String__Format_46c8eb8(param_2,param_3,0);
  if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9ba6b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cada48,uVar6,0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9ba6b = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Equality_43c6f30(param_1,0,0);
  if ((uVar5 & 1) == 0) {
    if ((param_1 == 0) ||
       (lVar3 = UnityEngine_Component__GetComponentsInChildren_object__26fa30c
                          (param_1,1,*(undefined8 *)PTR_DAT_04cada48), lVar3 == 0)) {
LAB_022a95f0:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (0 < (int)uVar1) {
      lVar7 = 0;
      do {
        if (uVar1 <= (uint)lVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        plVar4 = *(long **)(lVar3 + 0x20 + lVar7 * 8);
        if (plVar4 == (long *)0x0) goto LAB_022a95f0;
        (**(code **)(*plVar4 + 0x518))(plVar4,uVar6,*(undefined8 *)(*plVar4 + 0x520));
        uVar1 = *(uint *)(lVar3 + 0x18);
        lVar7 = lVar7 + 1;
      } while ((int)lVar7 < (int)uVar1);
    }
  }
  return;
}

