/* IL2CPP: Dino.BusSand.View.PropKit.<>c$$<get_BoomPost>b__41_0
void Dino_BusSand_View_PropKit___c___get_BoomPost_b__41_0 (Dino_BusSand_View_PropKit___c_o* __this, Dino_BusSand_View_PropKit_MeshBuilder_o* b, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.PropKit.<>c$$<get_BoomPost>b__41_0
   void Dino_BusSand_View_PropKit___c___get_BoomPost_b__41_0 (Dino_BusSand_View_PropKit___c_o*
   __this, Dino_BusSand_View_PropKit_MeshBuilder_o* b, const MethodInfo* method); */

void Dino_BusSand_View_PropKit___c___get_BoomPost_b__41_0_23e2ae8(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  
  if ((bRam0000000004f9ca6d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbd088);
    bRam0000000004f9ca6d = 1;
  }
  puVar1 = PTR_DAT_04cbd088;
  if (cRam0000000004f9b88b == '\0') {
    FUN_02132f7c(PTR_DAT_04cab4b0);
    cRam0000000004f9b88b = '\x01';
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (param_2 != 0) {
    Dino_BusSand_View_PropKit_MeshBuilder__Box_23dede4
              (0,0x3e800000,0,_UNK_00e208cc,0x3f000000,_UNK_00e208cc,param_2);
    lVar2 = *(long *)(*(long *)puVar1 + 0xb8);
    Dino_BusSand_View_PropKit_MeshBuilder__Sphere_23e0858
              (0,_UNK_00e208e8,0,_UNK_00e20a94,*(undefined4 *)(lVar2 + 0x60),
               *(undefined4 *)(lVar2 + 100),*(undefined4 *)(lVar2 + 0x68),
               *(undefined4 *)(lVar2 + 0x6c),param_2,6);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

