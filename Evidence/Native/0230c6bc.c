/* IL2CPP: Dino.BusSand.App.Meta.OfferScheduler$$OnHomeArrival
void Dino_BusSand_App_Meta_OfferScheduler__OnHomeArrival (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.OfferScheduler$$OnHomeArrival
   void Dino_BusSand_App_Meta_OfferScheduler__OnHomeArrival (const MethodInfo* method); */

void Dino_BusSand_App_Meta_OfferScheduler__OnHomeArrival_220c6bc(void)

{
  uint uVar1;
  undefined *puVar2;
  uint *puVar3;
  
  puVar2 = PTR_DAT_04cb21b8;
  if ((bRam0000000004f9bd06 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb21b8);
    bRam0000000004f9bd06 = 1;
  }
  puVar3 = *(uint **)(*(long *)puVar2 + 0xb8);
  uVar1 = puVar3[1];
  *(undefined1 *)(puVar3 + 1) = 0;
  *puVar3 = (uint)(byte)uVar1;
  return;
}

