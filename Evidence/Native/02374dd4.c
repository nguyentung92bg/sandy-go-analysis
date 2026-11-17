/* IL2CPP: Dino.BusSand.App.Meta.TrackingPlan$$O
Dino_BusSand_App_Meta_TrackingPlan_Field_o Dino_BusSand_App_Meta_TrackingPlan__O (System_String_o* k, int32_t t, System_String_array* allowed, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.TrackingPlan$$O
   Dino_BusSand_App_Meta_TrackingPlan_Field_o Dino_BusSand_App_Meta_TrackingPlan__O
   (System_String_o* k, int32_t t, System_String_array* allowed, const MethodInfo* method); */

void Dino_BusSand_App_Meta_TrackingPlan__O_2274dd4
               (undefined8 *param_1,undefined8 param_2,undefined4 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  if (param_4 != 0) {
    lVar2 = *(long *)(param_4 + 0x18);
    param_1[1] = 0;
    param_1[2] = 0;
    lVar1 = 0;
    if (lVar2 != 0) {
      lVar1 = param_4;
    }
    *param_1 = 0;
    *param_1 = param_2;
    thunk_FUN_02134474();
    plVar3 = param_1 + 2;
    *plVar3 = lVar1;
    *(undefined4 *)(param_1 + 1) = param_3;
    *(undefined1 *)((long)param_1 + 0xc) = 0;
    if (iRam00000000051c1b10 != 0) {
      FUN_02220bf0(1L << ((ulong)plVar3 >> 0xc & 0x3f),
                   ((ulong)plVar3 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

