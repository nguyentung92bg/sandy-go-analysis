/* IL2CPP: Dino.BusSand.App.Meta.Journey.UiJourney$$Commit
bool Dino_BusSand_App_Meta_Journey_UiJourney__Commit (Dino_BusSand_App_Meta_Journey_UiJourney_o* __this, int32_t mark, int64_t rec, int32_t added, System_String_o* a, System_String_o* b, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Journey.UiJourney$$Commit
   bool Dino_BusSand_App_Meta_Journey_UiJourney__Commit (Dino_BusSand_App_Meta_Journey_UiJourney_o*
   __this, int32_t mark, int64_t rec, int32_t added, System_String_o* a, System_String_o* b, const
   MethodInfo* method); */

bool Dino_BusSand_App_Meta_Journey_UiJourney__Commit_229a910
               (long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5,
               undefined8 param_6)

{
  char cVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_0239a9d0;
  cVar1 = *(char *)(*(long *)(param_1 + 0x10) + 0x24);
  if (cVar1 == '\0') {
    if (param_4 == 0) {
      uVar2 = *(uint *)(param_1 + 0x28);
      if ((int)uVar2 < 0x60) {
        lVar4 = *(long *)(param_1 + 0x18);
        if (lVar4 == 0) {
LAB_0239a9d0:
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if (*(uint *)(lVar4 + 0x18) <= uVar2) {
LAB_0239a9d4:
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        puVar3 = (undefined8 *)(lVar4 + (long)(int)uVar2 * 8 + 0x20);
        *puVar3 = param_5;
        thunk_FUN_02134474(puVar3,param_5);
        lVar4 = *(long *)(param_1 + 0x20);
        if (lVar4 == 0) goto LAB_0239a9d0;
        if (*(uint *)(lVar4 + 0x18) <= *(uint *)(param_1 + 0x28)) goto LAB_0239a9d4;
        puVar3 = (undefined8 *)(lVar4 + (long)(int)*(uint *)(param_1 + 0x28) * 8 + 0x20);
        *puVar3 = param_6;
        thunk_FUN_02134474(puVar3,param_6);
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
      }
    }
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
  }
  else {
    Dino_BusSand_App_Meta_Journey_JourneyBytes__Rewind_2295424();
    *(undefined8 *)(param_1 + 0x30) = param_3;
  }
  return cVar1 == '\0';
}

