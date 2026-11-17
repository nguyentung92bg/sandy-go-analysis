/* IL2CPP: Dino.BusSand.View.MechanicLayer$$Flash
void Dino_BusSand_View_MechanicLayer__Flash (Dino_BusSand_View_MechanicLayer_o* __this, UnityEngine_Renderer_o* r, UnityEngine_Color_o glow, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.MechanicLayer$$Flash
   void Dino_BusSand_View_MechanicLayer__Flash (Dino_BusSand_View_MechanicLayer_o* __this,
   UnityEngine_Renderer_o* r, UnityEngine_Color_o glow, const MethodInfo* method); */

ulong Dino_BusSand_View_MechanicLayer__Flash_23cf8d4
                (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  puVar1 = PTR_DAT_04cbd568;
  if ((bRam0000000004f9c9f9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac208);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbd570);
    FUN_02132f7c(PTR_DAT_04cbd568);
    bRam0000000004f9c9f9 = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  Dino_BusSand_View_MechanicLayer___c__DisplayClass132_0___ctor_23d53d0(lVar2,0);
  puVar1 = PTR_DAT_04ca9ae8;
  if (lVar2 != 0) {
    puVar6 = (undefined8 *)(lVar2 + 0x10);
    *puVar6 = param_6;
    thunk_FUN_02134474(puVar6,param_6);
    lVar3 = *(long *)puVar1;
    *(undefined4 *)(lVar2 + 0x18) = param_1;
    *(undefined4 *)(lVar2 + 0x1c) = param_2;
    uVar5 = *puVar6;
    *(undefined4 *)(lVar2 + 0x20) = param_3;
    *(undefined4 *)(lVar2 + 0x24) = param_4;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar5,0,0);
    if ((uVar4 & 1) != 0) {
      return uVar4;
    }
    uVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac208);
    System_Action_float____ctor_35f1448(uVar5,lVar2,*(undefined8 *)PTR_DAT_04cbd570,0);
    uVar4 = Dino_BusSand_Tween__Value_238bbfc(_UNK_00e20590,uVar5,0);
    if (uVar4 != 0) {
      *(undefined8 *)(uVar4 + 0x18) = param_5;
      thunk_FUN_02134474((undefined8 *)(uVar4 + 0x18),param_5,0);
      return uVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

