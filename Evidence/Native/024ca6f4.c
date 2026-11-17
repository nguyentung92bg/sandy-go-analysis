/* IL2CPP: Dino.BusSand.View.MechanicLayer$$Gulp
void Dino_BusSand_View_MechanicLayer__Gulp (Dino_BusSand_View_MechanicLayer_o* __this, UnityEngine_MeshRenderer_o* r, float dur, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.MechanicLayer$$Gulp
   void Dino_BusSand_View_MechanicLayer__Gulp (Dino_BusSand_View_MechanicLayer_o* __this,
   UnityEngine_MeshRenderer_o* r, float dur, const MethodInfo* method); */

ulong Dino_BusSand_View_MechanicLayer__Gulp_23ca6f4
                (undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  puVar1 = PTR_DAT_04cbd390;
  if ((bRam0000000004f9c9e1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac208);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbd398);
    FUN_02132f7c(PTR_DAT_04cbd390);
    bRam0000000004f9c9e1 = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  Dino_BusSand_View_MechanicLayer___c__DisplayClass101_0___ctor_23d3afc(lVar2,0);
  puVar1 = PTR_DAT_04ca9ae8;
  if (lVar2 != 0) {
    puVar5 = (undefined8 *)(lVar2 + 0x10);
    *puVar5 = param_3;
    thunk_FUN_02134474(puVar5,param_3);
    *(undefined8 *)(lVar2 + 0x18) = param_2;
    thunk_FUN_02134474((undefined8 *)(lVar2 + 0x18),param_2);
    uVar4 = *puVar5;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar4,0,0);
    if ((uVar3 & 1) != 0) {
      return uVar3;
    }
    uVar4 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac208);
    System_Action_float____ctor_35f1448(uVar4,lVar2,*(undefined8 *)PTR_DAT_04cbd398,0);
    uVar3 = Dino_BusSand_Tween__Value_238bbfc(param_1,uVar4,0);
    if (uVar3 != 0) {
      *(undefined8 *)(uVar3 + 0x18) = param_2;
      thunk_FUN_02134474((undefined8 *)(uVar3 + 0x18),param_2,0);
      return uVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

