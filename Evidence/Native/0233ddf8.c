/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$.cctor
void Dino_BusSand_App_Meta_GiftPackFeature___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$.cctor
   void Dino_BusSand_App_Meta_GiftPackFeature___cctor (const MethodInfo* method); */

void Dino_BusSand_App_Meta_GiftPackFeature___cctor_223ddf8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined2 *puVar3;
  undefined8 *puVar4;
  
  puVar2 = PTR_DAT_04caec48;
  puVar1 = PTR_DAT_04ca9c30;
  if ((bRam0000000004f9bee2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caec48);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9bee2 = 1;
  }
  puVar3 = *(undefined2 **)(*(long *)puVar2 + 0xb8);
  *puVar3 = 1;
  puVar4 = (undefined8 *)(puVar3 + 4);
  *puVar4 = *(undefined8 *)puVar1;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar4 >> 0xc & 0x3f),
                 ((ulong)puVar4 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

