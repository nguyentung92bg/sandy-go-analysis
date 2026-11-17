/* IL2CPP: Dino.BusSand.View.ChainRig.<>c__DisplayClass23_1$$<DropParts>b__1
void Dino_BusSand_View_ChainRig___c__DisplayClass23_1___DropParts_b__1 (Dino_BusSand_View_ChainRig___c__DisplayClass23_1_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.ChainRig.<>c__DisplayClass23_1$$<DropParts>b__1
   void Dino_BusSand_View_ChainRig___c__DisplayClass23_1___DropParts_b__1
   (Dino_BusSand_View_ChainRig___c__DisplayClass23_1_o* __this, const MethodInfo* method); */

void Dino_BusSand_View_ChainRig___c__DisplayClass23_1___DropParts_b__1_23958bc(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c8d9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c8d9 = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0x10) != 0) {
      lVar3 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x10),0);
      lVar4 = *(long *)puVar1;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar4);
      }
      puVar1 = PTR_DAT_04ca9ae8;
      uVar5 = 0;
      if ((bRam0000000004fa8603 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04ca9ae8,0);
        bRam0000000004fa8603 = 1;
        uVar5 = extraout_x1;
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        uVar5 = extraout_x1_00;
      }
      puVar1 = PTR_DAT_04cf6418;
      if ((bRam0000000004fa8602 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cf6418,uVar5);
        FUN_02132f7c(PTR_DAT_04ca9ae8);
        bRam0000000004fa8602 = 1;
      }
      if (*(long *)(*(long *)puVar1 + 0x38) == 0) {
        FUN_0216b4cc();
      }
      uVar5 = 0;
      if (lVar3 != 0) {
        uVar5 = *(undefined8 *)(lVar3 + 0x10);
      }
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (pcRam0000000004fa8680 == (code *)0x0) {
        pcRam0000000004fa8680 = (code *)FUN_02132f40(&UNK_00e39909);
      }
                    /* WARNING: Could not recover jumptable at 0x044c80c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000004fa8680)(0,uVar5);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  return;
}

