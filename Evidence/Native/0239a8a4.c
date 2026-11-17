/* IL2CPP: Dino.BusSand.App.Meta.Journey.UiJourney$$NameArg
int32_t Dino_BusSand_App_Meta_Journey_UiJourney__NameArg (Dino_BusSand_App_Meta_Journey_UiJourney_o* __this, System_String_o* a, System_String_o* b, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Journey.UiJourney$$NameArg
   int32_t Dino_BusSand_App_Meta_Journey_UiJourney__NameArg
   (Dino_BusSand_App_Meta_Journey_UiJourney_o* __this, System_String_o* a, System_String_o* b, const
   MethodInfo* method); */

undefined8
Dino_BusSand_App_Meta_Journey_UiJourney__NameArg_229a8a4
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = Dino_BusSand_App_Meta_Journey_UiJourney__Find_229a9d8();
  lVar2 = *(long *)(param_1 + 0x10);
  if (iVar1 < 0) {
    if (lVar2 == 0) goto LAB_0239a90c;
    Dino_BusSand_App_Meta_Journey_JourneyBytes__VarU_2295664(lVar2,0);
    Dino_BusSand_App_Meta_Journey_UiJourney__Literal_229aa90(param_1,param_2,param_3);
    uVar3 = 0;
  }
  else {
    if (lVar2 == 0) {
LAB_0239a90c:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    Dino_BusSand_App_Meta_Journey_JourneyBytes__VarU_2295664(lVar2,(long)(iVar1 + 1));
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

