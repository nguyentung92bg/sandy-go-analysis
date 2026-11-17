/* IL2CPP: Dino.BusSand.App.UI.PassportPanel$$BlockInput
void Dino_BusSand_App_UI_PassportPanel__BlockInput (Dino_BusSand_App_UI_PassportPanel_o* __this, bool block, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PassportPanel$$BlockInput
   void Dino_BusSand_App_UI_PassportPanel__BlockInput (Dino_BusSand_App_UI_PassportPanel_o* __this,
   bool block, const MethodInfo* method); */

void Dino_BusSand_App_UI_PassportPanel__BlockInput_21d87cc(long param_1,byte param_2)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9bb68 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cadf40);
    FUN_02132f7c(PTR_DAT_04cb0890);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9bb68 = 1;
  }
  lVar3 = *(long *)puVar2;
  uVar6 = *(undefined8 *)(param_1 + 0x58);
  *(byte *)(param_1 + 0x49) = param_2 & 1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 022d8844 to 023d88a3 has its CatchHandler @ 022d8844
                       catch() { ... } // from try @ 022d8844 with catch @ 022d8844
                       catch() { ... } // from try @ 022d8998 with catch @ 022d8844
                       catch() { ... } // from try @ 022d89c4 with catch @ 022d8844 */
  uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar6,0,0);
  if ((uVar4 & 1) != 0) {
    return;
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    UnityEngine_Behaviour__set_enabled_43bc50c(*(long *)(param_1 + 0x58),(param_2 ^ 1) & 1,0);
    if (*(long *)(param_1 + 0x58) != 0) {
      lVar3 = UnityEngine_Component__GetComponent_object__26f97e8
                        (*(long *)(param_1 + 0x58),*(undefined8 *)PTR_DAT_04cadf40);
      lVar5 = *(long *)puVar2;
      if (*(int *)(lVar5 + 0xe4) == 0) {
                    /* try { // try from 022d88a4 to 023d88f7 has its CatchHandler @ 022d89c4 */
        thunk_FUN_0218fdac(lVar5);
      }
      uVar4 = UnityEngine_Object__op_Equality_43c6f30(lVar3,0,0);
      if ((uVar4 & 1) != 0) {
        if ((*(long *)(param_1 + 0x58) == 0) ||
           (lVar3 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x58),0),
           lVar3 == 0)) goto LAB_022d8904;
        lVar3 = UnityEngine_GameObject__AddComponent_object__275a54c
                          (lVar3,*(undefined8 *)PTR_DAT_04cb0890);
      }
      if (lVar3 != 0) {
        bVar1 = (param_2 ^ 1) & 1;
        if ((bRam0000000004fac324 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04d09bf8,bVar1,0);
          bRam0000000004fac324 = 1;
        }
        if (lVar3 != 0) {
          lVar5 = *(long *)(lVar3 + 0x10);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar3,0);
          }
          if (pcRam0000000004fac350 == (code *)0x0) {
            pcRam0000000004fac350 = (code *)FUN_02132f40(&UNK_00e22703);
          }
                    /* WARNING: Could not recover jumptable at 0x0477b0b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000004fac350)(lVar5,bVar1);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
    }
  }
LAB_022d8904:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

