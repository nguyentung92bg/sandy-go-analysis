/* IL2CPP: Dino.BusSand.View.PropKit.<>c__DisplayClass28_0$$<Key>b__0
void Dino_BusSand_View_PropKit___c__DisplayClass28_0___Key_b__0 (Dino_BusSand_View_PropKit___c__DisplayClass28_0_o* __this, Dino_BusSand_View_PropKit_MeshBuilder_o* b, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.PropKit.<>c__DisplayClass28_0$$<Key>b__0
   void Dino_BusSand_View_PropKit___c__DisplayClass28_0___Key_b__0
   (Dino_BusSand_View_PropKit___c__DisplayClass28_0_o* __this,
   Dino_BusSand_View_PropKit_MeshBuilder_o* b, const MethodInfo* method); */

void Dino_BusSand_View_PropKit___c__DisplayClass28_0___Key_b__0_23e386c
               (undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR_DAT_04cbd088;
  if ((bRam0000000004f9ca73 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbd088);
    bRam0000000004f9ca73 = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  UnityEngine_Quaternion__Internal_FromEulerRad_43af004(_UNK_00e20418,0);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  Dino_BusSand_View_PropKit_MeshBuilder__Torus_23e0df8
            (_UNK_00e20310,0,0,_UNK_00e205f0,_UNK_00e20a84,param_2,0xe,6);
  if (cRam0000000004f9b88b == '\0') {
    FUN_02132f7c(PTR_DAT_04cab4b0);
    cRam0000000004f9b88b = '\x01';
  }
  uVar2 = _UNK_00e205f8;
  Dino_BusSand_View_PropKit_MeshBuilder__Box_23dede4
            (_UNK_00e205f8,0,0,_UNK_00e203f4,_UNK_00e20a94,_UNK_00e20a94,param_2);
  if (cRam0000000004f9b88b == '\0') {
    FUN_02132f7c(PTR_DAT_04cab4b0);
    cRam0000000004f9b88b = '\x01';
  }
  uVar1 = _UNK_00e20174;
  Dino_BusSand_View_PropKit_MeshBuilder__Box_23dede4
            (_UNK_00e20aec,_UNK_00e20518,0,_UNK_00e20174,_UNK_00e20754,_UNK_00e20174,param_2);
  if (cRam0000000004f9b88b == '\0') {
    FUN_02132f7c(PTR_DAT_04cab4b0);
    cRam0000000004f9b88b = '\x01';
  }
  Dino_BusSand_View_PropKit_MeshBuilder__Box_23dede4
            (_UNK_00e201f4,_UNK_00e20210,0,_UNK_00e2043c,uVar2,uVar1,param_2);
  return;
}

