/* IL2CPP: Dino.BusSand.View.PicturePaper$$Dispose
void Dino_BusSand_View_PicturePaper__Dispose (Dino_BusSand_View_PicturePaper_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.PicturePaper$$Dispose
   void Dino_BusSand_View_PicturePaper__Dispose (Dino_BusSand_View_PicturePaper_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_View_PicturePaper__Dispose_23dc83c(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_DAT_04cb6f30;
  if ((bRam0000000004f9ca45 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6f30);
    bRam0000000004f9ca45 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_View_PicturePaper__Free_23dc8c0(uVar3);
  puVar2 = (undefined8 *)(param_1 + 0x18);
  Dino_BusSand_View_PicturePaper__Free_23dc8c0(*puVar2);
  *(undefined8 *)(param_1 + 0x10) = 0;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x10),0);
  *puVar2 = 0;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar2 >> 0xc & 0x3f),
                 ((ulong)puVar2 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

