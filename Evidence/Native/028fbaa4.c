/* IL2CPP: Dino.BusSand.App.Meta.MonetizationSettings$$Clone<object>
Il2CppObject* Dino_BusSand_App_Meta_MonetizationSettings__Clone_object_ (Il2CppObject* o, const MethodInfo_27FBAA4* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.MonetizationSettings$$Clone<object>
   Il2CppObject* Dino_BusSand_App_Meta_MonetizationSettings__Clone_object_ (Il2CppObject* o, const
   MethodInfo_27FBAA4* method); */

long Dino_BusSand_App_Meta_MonetizationSettings__Clone_object__27fbaa4(long param_1,long param_2)

{
  byte bVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined4 uStack_24;
  
  if (*(long *)(param_2 + 0x38) == 0) {
    FUN_0216b4cc(param_2);
  }
  if (param_1 == 0) {
    lVar7 = *(long *)(*(long *)(param_2 + 0x38) + 0x10);
    puVar8 = *(undefined8 **)(lVar7 + 0x38);
    if (puVar8 == (undefined8 *)0x0) {
      FUN_02132f7c(PTR_DAT_04cc3e38);
      puVar8 = *(undefined8 **)(lVar7 + 0x38);
      if (puVar8 == (undefined8 *)0x0) {
        FUN_0216b4cc(lVar7);
        puVar8 = *(undefined8 **)(lVar7 + 0x38);
      }
    }
    uVar6 = *puVar8;
    uStack_24 = 0;
    if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    plVar2 = (long *)System_Type__GetTypeFromHandle_483f0b4(uVar6,0);
    if (plVar2 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_04cc3e38 + 0x130);
      if ((bVar1 <= *(byte *)(*plVar2 + 0x130)) &&
         (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_04cc3e38))
      {
        uVar3 = System_Type__get_HasElementType_48488d4(plVar2,0);
        if ((uVar3 & 1) != 0) {
          uVar6 = thunk_FUN_021985a8(PTR_DAT_04cc3e40);
          uVar6 = System_Environment__GetResourceString_486fa00(uVar6,0);
          thunk_FUN_021985a8(PTR_DAT_04cc3e48);
          uVar9 = thunk_FUN_0216e89c();
          System_MissingMethodException___ctor_4832328(uVar9,uVar6,0);
                    /* WARNING: Subroutine does not return */
          FUN_021330e8(uVar9,lVar7);
        }
        uStack_24 = 1;
        lVar4 = System_RuntimeType__CreateInstanceDefaultCtor_4857cbc(plVar2,1,1,1,1,&uStack_24,0);
        lVar7 = *(long *)(*(long *)(lVar7 + 0x38) + 8);
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_0216b470(lVar7);
        }
        if (lVar4 == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = thunk_FUN_0216e7a0(lVar4,lVar7);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021335a4(lVar4,lVar7);
          }
        }
        return lVar5;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar6 = UnityEngine_JsonUtility__ToJson_44323ac(param_1,0);
  lVar7 = *(long *)(*(long *)(param_2 + 0x38) + 8);
  puVar8 = *(undefined8 **)(lVar7 + 0x38);
  if (puVar8 == (undefined8 *)0x0) {
    FUN_0216b4cc(lVar7);
    puVar8 = *(undefined8 **)(lVar7 + 0x38);
  }
  uVar9 = *puVar8;
  if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar9 = System_Type__GetTypeFromHandle_483f0b4(uVar9,0);
  lVar4 = UnityEngine_JsonUtility__FromJson_4432504(uVar6,uVar9,0);
  lVar7 = *(long *)(*(long *)(lVar7 + 0x38) + 8);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0216b470(lVar7);
  }
  if (lVar4 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = thunk_FUN_0216e7a0(lVar4,lVar7);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021335a4(lVar4,lVar7);
    }
  }
  return lVar5;
}

