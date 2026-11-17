/* IL2CPP: Dino.BusSand.App.Meta.LiveFeature<object>$$get_Data
Il2CppObject* Dino_BusSand_App_Meta_LiveFeature_object___get_Data (Dino_BusSand_App_Meta_LiveFeature_TData__o* __this, const MethodInfo_2AE6258* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.LiveFeature<object>$$get_Data
   Il2CppObject* Dino_BusSand_App_Meta_LiveFeature_object___get_Data
   (Dino_BusSand_App_Meta_LiveFeature_TData__o* __this, const MethodInfo_2AE6258* method); */

long Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  
  if ((bRam0000000004f9d942 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac668);
    bRam0000000004f9d942 = 1;
  }
  plVar3 = param_1 + 2;
  lVar1 = *plVar3;
  if (lVar1 == 0) {
    uVar2 = (**(code **)(*param_1 + 0x208))(param_1,*(undefined8 *)(*param_1 + 0x210));
    if (*(int *)(*(long *)PTR_DAT_04cac668 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04cac668);
    }
    lVar1 = Dino_BusSand_App_Meta_LiveOps__LoadBlob_object__27ef244
                      (uVar2,*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x18));
    *plVar3 = lVar1;
    thunk_FUN_02134474(plVar3,lVar1);
    lVar1 = *plVar3;
  }
  return lVar1;
}

