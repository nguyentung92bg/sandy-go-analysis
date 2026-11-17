/* IL2CPP: Dino.BusSand.App.Meta.TrackingPlan.Field$$.ctor
void Dino_BusSand_App_Meta_TrackingPlan_Field___ctor (Dino_BusSand_App_Meta_TrackingPlan_Field_o __this, System_String_o* key, int32_t type, bool required, System_String_array* allowed, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.TrackingPlan.Field$$.ctor
   void Dino_BusSand_App_Meta_TrackingPlan_Field___ctor (Dino_BusSand_App_Meta_TrackingPlan_Field_o
   __this, System_String_o* key, int32_t type, bool required, System_String_array* allowed, const
   MethodInfo* method); */

void Dino_BusSand_App_Meta_TrackingPlan_Field___ctor_229208c
               (undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4,
               undefined8 param_5)

{
  undefined8 *puVar1;
  
  *param_1 = param_2;
  thunk_FUN_02134474();
  puVar1 = param_1 + 2;
  *puVar1 = param_5;
  *(undefined4 *)(param_1 + 1) = param_3;
  *(undefined1 *)((long)param_1 + 0xc) = param_4;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar1 >> 0xc & 0x3f),
                 ((ulong)puVar1 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

