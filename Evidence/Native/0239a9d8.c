/* IL2CPP: Dino.BusSand.App.Meta.Journey.UiJourney$$Find
int32_t Dino_BusSand_App_Meta_Journey_UiJourney__Find (Dino_BusSand_App_Meta_Journey_UiJourney_o* __this, System_String_o* a, System_String_o* b, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Journey.UiJourney$$Find
   int32_t Dino_BusSand_App_Meta_Journey_UiJourney__Find (Dino_BusSand_App_Meta_Journey_UiJourney_o*
   __this, System_String_o* a, System_String_o* b, const MethodInfo* method); */

ulong Dino_BusSand_App_Meta_Journey_UiJourney__Find_229a9d8
                (long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  if (0 < *(int *)(param_1 + 0x28)) {
    uVar3 = 0;
    do {
      lVar2 = *(long *)(param_1 + 0x18);
      if (lVar2 == 0) {
LAB_0239aa88:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (*(uint *)(lVar2 + 0x18) <= uVar3) {
LAB_0239aa8c:
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      uVar1 = System_String__Equals_46d0e60(*(undefined8 *)(lVar2 + uVar3 * 8 + 0x20),param_2,4,0);
      if ((uVar1 & 1) != 0) {
        lVar2 = *(long *)(param_1 + 0x20);
        if (lVar2 == 0) goto LAB_0239aa88;
        if (*(uint *)(lVar2 + 0x18) <= uVar3) goto LAB_0239aa8c;
        uVar1 = System_String__Equals_46d0e60(*(undefined8 *)(lVar2 + uVar3 * 8 + 0x20),param_3,4,0)
        ;
        if ((uVar1 & 1) != 0) goto LAB_0239aa74;
      }
      uVar3 = uVar3 + 1;
    } while ((long)uVar3 < (long)*(int *)(param_1 + 0x28));
  }
  uVar3 = 0xffffffff;
LAB_0239aa74:
  return uVar3 & 0xffffffff;
}

