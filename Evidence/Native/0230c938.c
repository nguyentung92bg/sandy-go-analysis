/* IL2CPP: Dino.BusSand.App.Meta.StarterOffer$$get_Bought
bool Dino_BusSand_App_Meta_StarterOffer__get_Bought (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.StarterOffer$$get_Bought
   bool Dino_BusSand_App_Meta_StarterOffer__get_Bought (const MethodInfo* method); */

uint Dino_BusSand_App_Meta_StarterOffer__get_Bought_220c938(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  
  puVar1 = PTR_DAT_04cad1f0;
  if ((bRam0000000004f9bd0a & 1) == 0) {
                    /* try { // try from 0230c95c to 0240c963 has its CatchHandler @ 0230d6b4 */
    FUN_02132f7c(PTR_DAT_04cad1f0);
                    /* try { // try from 0230c964 to 0240d6bb has its CatchHandler @ 0230c2ac */
    bRam0000000004f9bd0a = 1;
  }
  uVar2 = Dino_BusSand_App_Meta_Monetization__get_StarterStoreItem_2267990(0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar3 = Dino_BusSand_App_Iap__CanPurchase_217a6e8(uVar2,0);
  return (uVar3 ^ 0xffffffff) & 1;
}

