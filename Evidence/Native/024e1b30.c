/* IL2CPP: Dino.BusSand.View.PropKit.<>c$$<get_Planter>b__26_0
void Dino_BusSand_View_PropKit___c___get_Planter_b__26_0 (Dino_BusSand_View_PropKit___c_o* __this, Dino_BusSand_View_PropKit_MeshBuilder_o* b, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.PropKit.<>c$$<get_Planter>b__26_0
   void Dino_BusSand_View_PropKit___c___get_Planter_b__26_0 (Dino_BusSand_View_PropKit___c_o*
   __this, Dino_BusSand_View_PropKit_MeshBuilder_o* b, const MethodInfo* method); */

void Dino_BusSand_View_PropKit___c___get_Planter_b__26_0_23e1b30(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cbd088;
  if ((bRam0000000004f9ca67 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbd088);
    bRam0000000004f9ca67 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (param_2 != 0) {
    Dino_BusSand_View_PropKit_MeshBuilder__Cylinder_23df990
              (0,0,0,0,_UNK_00e20324,0,_UNK_00e207cc,_UNK_00e20324,param_2,0xc);
    Dino_BusSand_View_PropKit_MeshBuilder__Cylinder_23df990
              (0,_UNK_00e20334,0,0,_UNK_00e2098c,0,_UNK_00e204f0,_UNK_00e204f0,param_2,0xc);
    lVar2 = *(long *)(*(long *)puVar1 + 0xb8);
    Dino_BusSand_View_PropKit_MeshBuilder__Sphere_23e0858
              (0,_UNK_00e205e8,0,_UNK_00e200b4,*(undefined4 *)(lVar2 + 0x70),
               *(undefined4 *)(lVar2 + 0x74),*(undefined4 *)(lVar2 + 0x78),
               *(undefined4 *)(lVar2 + 0x7c),param_2,8);
    lVar2 = *(long *)(*(long *)puVar1 + 0xb8);
    Dino_BusSand_View_PropKit_MeshBuilder__Sphere_23e0858
              (_UNK_00e20004,0x3f400000,_UNK_00e2043c,_UNK_00e20aec,*(undefined4 *)(lVar2 + 0x60),
               *(undefined4 *)(lVar2 + 100),*(undefined4 *)(lVar2 + 0x68),
               *(undefined4 *)(lVar2 + 0x6c),param_2,7);
    lVar2 = *(long *)(*(long *)puVar1 + 0xb8);
    Dino_BusSand_View_PropKit_MeshBuilder__Sphere_23e0858
              (_UNK_00e20734,_UNK_00e1fdd0,_UNK_00e20498,_UNK_00e20390,*(undefined4 *)(lVar2 + 0x60)
               ,*(undefined4 *)(lVar2 + 100),*(undefined4 *)(lVar2 + 0x68),
               *(undefined4 *)(lVar2 + 0x6c),param_2,7);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

