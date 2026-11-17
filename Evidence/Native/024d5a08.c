/* IL2CPP: Dino.BusSand.View.MechanicLayer.<>c__DisplayClass94_0$$<RetractHose>b__0
void Dino_BusSand_View_MechanicLayer___c__DisplayClass94_0___RetractHose_b__0 (Dino_BusSand_View_MechanicLayer___c__DisplayClass94_0_o* __this, float k, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.MechanicLayer.<>c__DisplayClass94_0$$<RetractHose>b__0
   void Dino_BusSand_View_MechanicLayer___c__DisplayClass94_0___RetractHose_b__0
   (Dino_BusSand_View_MechanicLayer___c__DisplayClass94_0_o* __this, float k, const MethodInfo*
   method); */

void Dino_BusSand_View_MechanicLayer___c__DisplayClass94_0___RetractHose_b__0_23d5a08
               (undefined4 param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9ca22 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc910);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9ca22 = 1;
  }
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar4,0,0);
  puVar2 = PTR_DAT_04cbc910;
  if ((uVar3 & 1) == 0) {
    uVar8 = *(undefined4 *)(param_2 + 0x20);
    uVar5 = *(undefined4 *)(param_2 + 0x24);
    uVar4 = *(undefined8 *)(param_2 + 0x10);
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    uVar9 = *(undefined4 *)(param_2 + 0x28);
    uVar6 = *(undefined4 *)(param_2 + 0x2c);
    uVar7 = *(undefined4 *)(param_2 + 0x30);
    uVar10 = *(undefined4 *)(param_2 + 0x34);
    Dino_BusSand_Easing__Evaluate_238b7d0(param_1,4,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_View_GasHose__Build_23b335c(uVar8,uVar5,uVar9,uVar6,uVar7,uVar10,uVar1,uVar4,0);
  }
  return;
}

