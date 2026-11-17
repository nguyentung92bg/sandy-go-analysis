/* IL2CPP: Dino.BusSand.App.Meta.TrackingPlan.Params$$.ctor
void Dino_BusSand_App_Meta_TrackingPlan_Params___ctor (Dino_BusSand_App_Meta_TrackingPlan_Params_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x035b3698) */
/* WARNING: Removing unreachable block (ram,0x035b36b4) */
/* IL2CPP: Dino.BusSand.App.Meta.TrackingPlan.Params$$.ctor
   void Dino_BusSand_App_Meta_TrackingPlan_Params___ctor
   (Dino_BusSand_App_Meta_TrackingPlan_Params_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_TrackingPlan_Params___ctor_22921a8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  
  puVar1 = PTR_DAT_04ca9b50;
  if ((bRam0000000004f9c1d8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9b50);
    bRam0000000004f9c1d8 = 1;
  }
  lVar2 = **(long **)(*(long *)(*(long *)puVar1 + 0x20) + 0xc0);
  System_Object___ctor_4870e5c(param_1,0);
  lVar2 = FUN_02773e98(*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x18));
  if (lVar2 == 0) {
    return;
  }
  puVar3 = (undefined8 *)(param_1 + 0x30);
  *puVar3 = 0;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar3 >> 0xc & 0x3f),
                 ((ulong)puVar3 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

